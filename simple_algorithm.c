/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_algorithm.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochaves <tochaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 14:29:16 by kbezerra          #+#    #+#             */
/*   Updated: 2026/05/21 18:45:16 by tochaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	selection_sort2(t_stack *a)
{
	int	i;
	int j;
	int min;
	int max;

	j = a->top;
	i = 0;
	min = stack_min(a);
	max = stack_max(a);
	while (i == 0)
	{
		//o loop nao esta a funcionar
		// o caso "3 1 2" nao esta a funcionar
		if (a->data[j] > a->data[j - 1])
			sa(a);
		if (a->data[j - 1] > a->data[j - 2])
			rra(a);
		else if (a->data[j] > a->data[j - 1])
			ra(a);
		if (min == j && max == j - 2)
			i++;
	}
}

void	selection_sort(t_stack *a, t_stack *b)
{
	int	i;
	int	min;

	i = a->top;
	if (a->size <= 3)
	{
		selection_sort2(a);
		return ;
	}
	while (i > -1)
	{
		//o pb esta a ser chamado mesmo quando a stack esta ordenada
		min = stack_min(a);
		if (min == a->data[i - 1] && i > 0)
			sa(a);
		else if (min != a->data[i] && i > 0)
		{
			while (min != a->data[i])
				rra(a);
		}
		if (min == a->data[i])
			pb(a, b);
		i--;
	}
	while (b->top > -1)
		pa(a, b);
}

