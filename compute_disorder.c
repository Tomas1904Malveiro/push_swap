/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compute_disorder.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochaves <tochaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 14:34:27 by kbezerra          #+#    #+#             */
/*   Updated: 2026/05/20 14:51:39 by tochaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

double	compute_disorder(t_stack *a)
{
	long	mistakes;
	long	total_pairs;
	long	i;
	long	j;

	if (a->size <= 1)
		return (0);
	mistakes = 0;
	total_pairs = 0;
	i = 0;
	while (i <= a->top - 1)
	{
		j = i + 1;
		while (j <= a->top)
		{
			total_pairs += 1;
			if (a->data[i] > a->data[j])
				mistakes += 1;
			j++;
		}
		i++;
	}
	return ((double)mistakes / total_pairs);
}
