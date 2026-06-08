/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochaves <tochaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 13:40:21 by tochaves          #+#    #+#             */
/*   Updated: 2026/06/05 18:18:33 by tochaves         ###   ########.fr       */
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

t_benchmark	*bench_stats(void)
{
	t_benchmark	*bench;

	bench = malloc(sizeof(t_benchmark));
	if (!bench)
		return (NULL);
	bench->benchmark_alg = 0;
	bench->total_ops = 0;
	bench->sa = 0;
	bench->sb = 0;
	bench->ss = 0;
	bench->pa = 0;
	bench->pb = 0;
	bench->ra = 0;
	bench->rb = 0;
	bench->rr = 0;
	bench->rra = 0;
	bench->rrb = 0;
	bench->rrr = 0;
	return (bench);
}
