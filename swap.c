/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbezerra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 17:05:27 by kbezerra          #+#    #+#             */
/*   Updated: 2026/05/19 17:05:31 by kbezerra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *a)
{
	int temp;

	if (!a || a->top < 1)
		return ;
	temp = a->data[a->top];
	a->data[a->top] = a->data[a->top - 1];
	a->data[a->top - 1] = temp;
}

void	sb(t_stack *b)
{
	int temp;

	if (!b || b->top < 1)
		return ;
	temp = b->data[b->top];
	b->data[b->top] = b->data[b->top - 1];
	b->data[b->top - 1] = temp;
}

void	ss(t_stack *a, t_stack *b)
{
	sa(a);
	sb(b);
}
