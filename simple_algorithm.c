/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_algorithm.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbezerra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 14:29:16 by kbezerra          #+#    #+#             */
/*   Updated: 2026/05/20 14:29:18 by kbezerra         ###   ########.fr       */
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
		if (min == a->data[a->top - 1] && a->top > 0)
			sa(a);
		else if (min != a->data[a->top] && a->top > 0)
		{
			while (min != a->data[a->top])
				rra(a);
		}
		if (min == a->data[a->top])
			pb(a, b);
	}
	while (b->top > -1)
		pa(a, b);
}
