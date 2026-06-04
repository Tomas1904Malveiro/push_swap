/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochaves <tochaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 14:22:31 by kbezerra          #+#    #+#             */
/*   Updated: 2026/06/04 15:52:07 by tochaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	t_benchmark *bench;

	bench = bench_stats();
	int flag;
	if (argc > 1)
	{
		flag = check_flags(argc, argv, bench);
		while (argc > 1 && argv[1][0] == '-' && argv[1][1] == '-')
		{
			argv++;
			argc--;
		}
		a = stack_new(count_args(argc, argv));
		b = stack_new(count_args(argc, argv));
		parse_args(argc, argv, a, b);
		if (!stack_is_sorted(a))
			sort_stack(flag, a, b, bench);
		stack_free(a);
		stack_free(b);
	}
	return (0);
}
