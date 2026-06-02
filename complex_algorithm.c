/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complex_algorithm.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochaves <tochaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 16:20:51 by tochaves          #+#    #+#             */
/*   Updated: 2026/06/01 16:41:57 by tochaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_bits(int n)
{
	int	bits;

	bits = 0;
	while ((1 << bits) <= n)
	{
		bits++;
	}
	return (bits);
}
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
	int	*array;
	int	i;

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

void	radix_sort(t_stack *a, t_stack *b, t_benchmark *bench)
{
	int	size;
	int	max_bits;
	int	i;
	int	bit;

	index_stack(a);
	size = a->top + 1;
	max_bits = get_bits(size);
	bit = 0;
	while (bit < max_bits)
	{
		i = 0;
		while (i < size)
		{
			if ((a->data[a->top] >> bit) & 1)
				ra(a, bench);
			else
				pb(a, b, bench);
			i++;
		}
		while (b->top > -1)
			pa(a, b, bench);
		bit++;
	}
}
