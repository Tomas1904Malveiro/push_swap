/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochaves <tochaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 14:03:24 by tochaves          #+#    #+#             */
/*   Updated: 2026/05/27 16:56:53 by tochaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_flag(char *arg)
{
	if (ft_strncmp(arg, "--simple", 9) == 0)
		return (1);
	if (ft_strncmp(arg, "--medium", 9) == 0)
		return (2);
	if (ft_strncmp(arg, "--complex", 10) == 0)
		return (3);
	if (ft_strncmp(arg, "--adaptive", 11) == 0)
		return (0);
	return (0);
}

int	check_flags(int argc, char **argv)
{
	int	flag;

	flag = 0;
	if (argc > 1 && argv[1][0] == '-' && argv[1][1] == '-')
	{
		flag = get_flag(argv[1]);
	}
	return (flag);
}

void	sort_stack(int flag, t_stack *a, t_stack *b)
{
	double disorder;

	if (flag == 1)
		selection_sort(a, b);
	// else if (flag == 2)
	// 	algo_medium(a, b);
	// else if (flag == 3)
	// 	algo_complex(a, b);
	else
	{
		selection_sort(a, b); //so para testar caso nao tenha flag
        disorder = compute_disorder(a);
		// if (disorder < 0.2)
		//     selection_sort(a, b);
		// else if (disorder <= 0.5)
		// 	algo_medium(a, b);
		// else
		// 	algo_complex(a, b);
	}
}
