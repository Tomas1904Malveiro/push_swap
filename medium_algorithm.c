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

static int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
	{
		return (0);
	}
	while (i <= 46340 && i * i <= nb)
		i++;
	return (i - 1);
}

void chunk_sorting(t_stack *a, t_stack *b)
{
	int chunk_size;
	int	chunk_min;
	int chunk_max;

	index_stack(a);
	chunk_size = ft_sqrt(a->size);
	chunk_min = 0;
	chunk_max = chunk_size - 1;
	while (a->top > -1)
	{
		printf("%d\n", a->data[a->top]);
		if (a->data[a->top] >= 10 && a->data[a->top] <= 60)
		{
			printf("erro aqui\n");
			printf("erro aqui\n");
			printf("erro aqui\n");
			printf("erro aqui\n");
			printf("erro aqui\n");
			pb(a, b);
			if (b->size == chunk_max && chunk_max)
			{
				chunk_min += chunk_size;
				chunk_max += chunk_size;
			}
		}
		else
		{
			ra(a);
			printf("%d depois do ra\n", a->data[a->top]);
		}
	}
	while (b->top > -1)
		selection_sort(a, b);
}
