/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_algorithm.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochaves <tochaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 14:29:16 by kbezerra          #+#    #+#             */
/*   Updated: 2026/05/25 14:52:23 by tochaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	selection_sort3num(t_stack *a)
{
	while (stack_is_sorted(a) < 1)
	{
		if (a->data[a->top] == stack_max(a))
			ra(a);
		if (a->data[a->top - 1] == stack_max(a))
			rra(a);
		if (a->data[a->top] > a->data[a->top - 1])
			sa(a);
	}
}

void	selection_sort(t_stack *a, t_stack *b)
{
	while (a->top > 2)
	{
		while (stack_peek(a) != stack_min(a))
			ra(a);
		pb(a, b);
	}
	selection_sort3num(a);
	while (b->top > -1)
	{
		while (stack_peek(b) != stack_max(b))
			rb(b);
		pa(a, b);
	}
}
