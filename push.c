/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochaves <tochaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 17:06:29 by kbezerra          #+#    #+#             */
/*   Updated: 2026/06/05 18:18:02 by tochaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack *a, t_stack *b, t_benchmark *bench)
{
	if (!a || !b || b->top <= -1 || a->top >= (a->size - 1))
		return ;
	a->top++;
	a->data[a->top] = b->data[b->top];
	b->top--;
	bench->pa++;
	bench->total_ops++;
	write(1, "pa\n", 3);
}

void	pb(t_stack *a, t_stack *b, t_benchmark *bench)
{
	if (!a || !b || a->top <= -1 || b->top >= (b->size - 1))
		return ;
	b->top++;
	b->data[b->top] = a->data[a->top];
	a->top--;
	bench->pb++;
	bench->total_ops++;
	write(1, "pb\n", 3);
}
