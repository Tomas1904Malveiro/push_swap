/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbezerra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 17:09:56 by kbezerra          #+#    #+#             */
/*   Updated: 2026/05/19 17:09:58 by kbezerra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack *a)
{
	int	temp;
	int	i;

	i = 0;
	temp = a->data[0];
	while (i < a->top)
	{
		a->data[i] = a->data[i + 1];
		i++;
	}
	a->data[a->top] = temp;
}

void	rrb(t_stack *b)
{
	int	temp;
	int	i;

	i = 0;
	temp = b->data[0];
	while (i < b->top)
	{
		b->data[i] = b->data[i + 1];
		i++;
	}
	b->data[b->top] = temp;
}

void	rrr(t_stack *a, t_stack *b)
{
	rra(a);
	rrb(b);
}
