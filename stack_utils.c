/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochaves <tochaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 10:47:37 by tochaves          #+#    #+#             */
/*   Updated: 2026/05/22 17:51:19 by tochaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_push(t_stack *s, int n)
{
	if (s->top == s->size - 1)
		return ;
	s->top++;
	s->data[s->top] = n;
}

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
	{
		return (0);
	}
	while (i <= 46340 && i * i <= nb)
		i++;
	return (i - 1);
}

int	stack_peek(t_stack *s)
{
	int	n;

	if (s->top == -1)
		return (-1);
	n = s->data[s->top];
	return (n);
}

int	stack_min(t_stack *s)
{
	int	min;
	int	i;

	min = s->data[0];
	i = 1;
	while (i <= s->top)
	{
		if (s->data[i] < min)
			min = s->data[i];
		i++;
	}
	return (min);
}

int	stack_max(t_stack *s)
{
	int	max;
	int	i;

	max = s->data[0];
	i = 1;
	while (i <= s->top)
	{
		if (s->data[i] > max)
			max = s->data[i];
		i++;
	}
	return (max);
}
