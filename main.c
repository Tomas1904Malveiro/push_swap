/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochaves <tochaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 14:22:31 by kbezerra          #+#    #+#             */
/*   Updated: 2026/05/26 17:23:15 by tochaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	double	disorder;

	if (argc > 1)
	{
		a = stack_new(argc - 1);
		b = stack_new(argc - 1);
		parse_args(argc, argv, a, b);
		if (!stack_is_sorted(a))
		{
			selection_sort(a, b);
			disorder = compute_disorder(a);
			if (disorder < 0.2)
				selection_sort(a, b);
			// else if (disorder <= 0.5)
			// 	algo_medium(a, b);
			// else
			// 	algo_complex(a, b);
		}
		stack_free(a);
		stack_free(b);
	}
	return (0);
}
