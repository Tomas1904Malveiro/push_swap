/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_algorithm.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochaves <tochaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 14:29:16 by kbezerra          #+#    #+#             */
/*   Updated: 2026/05/21 16:14:28 by tochaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	selection_sort(t_stack *a, t_stack *b)
{
	int	i;
	int	min;

	i = a->top;
	while (a->top > -1)
	{
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
	}
	while (b->top > -1)
		pa(a, b);
}
