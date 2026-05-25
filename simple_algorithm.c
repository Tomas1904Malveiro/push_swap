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

void	selection_sort(t_stack *a, t_stack *b)
{
	while (a->top > -1)
	{
		while (stack_peek(a) != stack_min(a))
			ra(a);
		pb(a, b);
	}
	while (b->top > -1)
	{
		while (stack_peek(b) != stack_max(b))
			rb(b);
		pa(a, b);
	}
}
