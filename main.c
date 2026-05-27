/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochaves <tochaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 14:22:31 by kbezerra          #+#    #+#             */
/*   Updated: 2026/05/27 16:56:58 by tochaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	int flag;
	if (argc > 1)
	{
		flag = check_flags(argc, argv);
		if (argc > 1 && argv[1][0] == '-' && argv[1][1] == '-')
		{
			argv++;
			argc--;
		}
		a = stack_new(count_args(argc, argv));
		b = stack_new(count_args(argc, argv));
		parse_args(argc, argv, a, b);
		if (!stack_is_sorted(a))
		{
			sort_stack(flag, a, b);
		}
		stack_free(a);
		stack_free(b);
	}
	return (0);
}
