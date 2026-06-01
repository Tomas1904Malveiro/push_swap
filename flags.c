/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochaves <tochaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 14:03:24 by tochaves          #+#    #+#             */
/*   Updated: 2026/06/01 16:23:58 by tochaves         ###   ########.fr       */
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
	if (ft_strncmp(arg, "--bench", 7) == 0)
		return (4);
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
	double	disorder;

	if (flag == 1)
		selection_sort(a, b);
	else if (flag == 2)
		chunk_sorting(a, b);
	else if (flag == 3)
		radix_sort(a, b);
	else if (flag == 4)
	{	
		// benchmark
	}
	else
	{
		disorder = compute_disorder(a);
		if (disorder < 0.2)
			selection_sort(a, b);
		else if (disorder <= 0.5)
			chunk_sorting(a, b);
		else
			radix_sort(a, b);
	}
}
