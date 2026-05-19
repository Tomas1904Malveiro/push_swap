/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochaves <tochaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 14:10:39 by tochaves          #+#    #+#             */
/*   Updated: 2026/05/19 14:51:42 by tochaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_number(char *s)
{
	int	i;

	i = 0;
	if (s[i] == '+' || s[i] == '-')
		i++;
	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	is_duplicate(t_stack *s, int n)
{
	int	i;

	i = 0;
	while (i <= s->top)
	{
		if (s->data[i] == n)
			return (1);
		i++;
	}
	return (0);
}

void	error_exit(t_stack *s)
{
	if (s)
		stack_free(s);
	write(2, "Error\n", 6);
	exit(1);
}
