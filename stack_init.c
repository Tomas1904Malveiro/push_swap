/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochaves <tochaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 13:40:21 by tochaves          #+#    #+#             */
/*   Updated: 2026/05/25 10:08:03 by tochaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_new(int size)
{
	t_stack	*s;

	s = malloc(sizeof(t_stack));
	if (!s)
		return (NULL);
	s->data = malloc(sizeof(int) * size);
	if (!s->data)
	{
		free(s);
		return (NULL);
	}
	s->size = size;
	s->top = -1;
	return (s);
}

void	stack_free(t_stack *s)
{
	if (!s)
		return ;
	free(s->data);
	free(s);
}

int	stack_is_sorted(t_stack *s)
{
	int	i;

	if (s->top == -1)
		return (1);
	i = s->top;
	while (i > 0)
	{
		if (s->data[i] > s->data[i - 1])
			return (0);
		i--;
	}
	return (1);
}
