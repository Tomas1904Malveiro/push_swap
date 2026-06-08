/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium_algorithm.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbezerra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 11:58:06 by kbezerra          #+#    #+#             */
/*   Updated: 2026/05/26 11:58:08 by kbezerra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

static void	selection_sortarray(int *array, t_stack *a)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < a->size - 1)
	{
		j = i + 1;
		while (j < a->size)
		{
			if (array[i] > array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
			j++;
		}
		i++;
	}
}

static int	*stack_copy(t_stack *a)
{
	int		*array;
	int		i;

	array = malloc(sizeof(int) * a->size);
	if (!array)
		return (NULL);
	i = 0;
	while (i <= a->top)
	{
		array[i] = a->data[i];
		i++;
	}
	selection_sortarray(array, a);
	return (array);
}

static void	index_stack(t_stack *a)
{
	int	*sorted;
	int	i;
	int	j;

	sorted = stack_copy(a);
	if (!sorted)
		return ;
	i = 0;
	while (i <= a->top)
	{
		j = 0;
		while (sorted[j] != a->data[i])
			j++;
		a->data[i] = j;
		i++;
	}
	free(sorted);
}

static void	push_chunks(t_stack *a, t_stack *b, int chunk_size, t_benchmark *bh)
{
	int	chunk_min;
	int	chunk_max;

	chunk_min = 0;
	chunk_max = chunk_size - 1;
	while (a->top > -1)
	{
		if (a->data[a->top] >= chunk_min && a->data[a->top] <= chunk_max)
		{
			pb(a, b, bh);
			if (b->top == chunk_max)
			{
				chunk_min += chunk_size;
				chunk_max += chunk_size;
			}
		}
		else
			ra(a, bh);
	}
}

void	chunk_sorting(t_stack *a, t_stack *b, t_benchmark *bench)
{
	int	max_pos;
	int	max;

	index_stack(a);
	push_chunks(a, b, ft_sqrt(a->size), bench);
	while (b->top > -1)
	{
		max = stack_max(b);
		max_pos = 0;
		while (b->data[max_pos] != max)
			max_pos++;
		if (max_pos <= b->top / 2)
			while (b->data[b->top] != max)
				rrb(b, bench);
		else
			while (b->data[b->top] != max)
				rb(b, bench);
		pa(a, b, bench);
	}
}
