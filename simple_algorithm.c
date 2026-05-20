/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_algorithm.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbezerra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 14:29:16 by kbezerra          #+#    #+#             */
/*   Updated: 2026/05/20 14:29:18 by kbezerra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	insertion_sort(t_stack *a, t_stack *b)
{
	int	i;

	i = a->top;
	while (i <= 0)
	{
		if (a->data[a->top] > a->data[a->top - 1])
			sa(a);
		
		i--;
	}
}
