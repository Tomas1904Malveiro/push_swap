/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochaves <tochaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 14:22:31 by kbezerra          #+#    #+#             */
/*   Updated: 2026/05/20 13:54:29 by tochaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	parse_args(int argc, char **argv, t_stack *a, t_stack *b)
{
	int	i;
	int	n;

	i = 1;
	while (i < argc)
	{
		if (!is_number(argv[i]))
			error_exit(a, b);
		n = ft_atoi(argv[i]);
		if (is_duplicate(a, n))
			error_exit(a, b);
		stack_push(a, n);
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	if (argc > 1)
	{
		a = stack_new(argc - 1);
		b = stack_new(argc - 1);
		parse_args(argc, argv, a, b);
		if (!stack_is_sorted(a))
		{
			// colocar algoritmos aqui para ordenar
		}
		stack_free(a);
		stack_free(b);
	}
	return (0);
}
