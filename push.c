/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbezerra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 17:06:29 by kbezerra          #+#    #+#             */
/*   Updated: 2026/05/19 17:06:31 by kbezerra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack *a, t_stack *b)
{
	if (!a || !b || b->top <= -1 || a->top >= (a->size - 1))
		return ;
	a->top++;
	a->data[a->top] = b->data[b->top];
	b->top--;
}

void	pb(t_stack *a, t_stack *b)
{
	if (!a || !b || a->top <= -1 || b->top >= (b->size - 1))
		return ;
	b->top++;
	b->data[b->top] = a->data[a->top];
	a->top--;
}
