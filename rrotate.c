/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochaves <tochaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 17:09:56 by kbezerra          #+#    #+#             */
/*   Updated: 2026/05/21 16:11:17 by tochaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack *a, t_benchmark *bench)
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
	bench->rra++;
	bench->total_ops++;
	if (bench->benchmark_mode == 0)
		write(1, "rra\n", 4);
}

void	rrb(t_stack *b, t_benchmark *bench)
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
	bench->rrb++;
	bench->total_ops++;
	if (bench->benchmark_mode == 0)
		write(1, "rrb\n", 4);
}

void	rrr(t_stack *a, t_stack *b, t_benchmark *bench)
{
	rra(a, bench);
	rrb(b, bench);
	bench->rrr++;
	bench->total_ops++;
	if (bench->benchmark_mode == 0)
		write(1, "rrr\n", 4);
}
