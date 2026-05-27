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

void	selection_sortarray(int *array, t_stack *a)
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

int	*stack_copy(t_stack *a)
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

void	index_stack(t_stack *a)
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
		while (sorted[i] != a->data[j])
			j++;
		a->data[j] = i;
		i++;
	}
	free(sorted);
}

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
	{
		return (0);
	}
	while (i <= 46340 && i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

void chunk_sorting(t_stack *a, t_stack *b)
{
	
}
