/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbezerra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 17:07:28 by kbezerra          #+#    #+#             */
/*   Updated: 2026/05/19 17:07:31 by kbezerra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *a)
{
	int	temp;
	int	i;

	i = a->top;
	temp = a->data[a->top];
	while (i > 0)
	{
		a->data[i] = a->data[i - 1];
		i--;
	}
	a->data[0] = temp;
}

void	rb(t_stack *b)
{
	int	temp;
	int	i;

	i = b->top;
	temp = b->data[b->top];
	while (i > 0)
	{
		b->data[i] = b->data[i - 1];
		i--;
	}
	b->data[0] = temp;
}

void	rr(t_stack *a, t_stack *b)
{
	ra(a);
	rb(b);
}
