/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochaves <tochaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 17:23:00 by tochaves          #+#    #+#             */
/*   Updated: 2026/05/27 11:51:06 by tochaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	handle_numbers(char *str, t_stack *a, t_stack *b)
{
	int	n;

	if (!is_number(str))
		error_exit(a, b);
	n = ft_atoi(str);
	if (is_duplicate(a, n))
		error_exit(a, b);
	stack_push(a, n);
}

static void	handle_arg(char *str, t_stack *a, t_stack *b)
{
	char	**split;
	int		j;
	int		count;

	split = ft_split(str, ' ');
	j = 0;
	if (!split)
		error_exit(a, b);
	while (split[j])
		j++;
	count = j;
	j--;
	while (j >= 0)
	{
		handle_numbers(split[j], a, b);
		j--;
	}
	// free_result(split, count);
}

void	parse_args(int argc, char **argv, t_stack *a, t_stack *b)
{
	int	i;

	i = argc - 1;
	while (i > 0)
	{
		handle_arg(argv[i], a, b);
		i--;
	}
}

int	count_args(int argc, char **argv)
{
	int		total;
	int		i;
	int		j;
	char	**split;

	total = 0;
	i = 1;
	while (i < argc)
	{
		if (ft_strchr(argv[i], ' '))
		{
			j = 0;
			split = ft_split(argv[i], ' ');
			while (split[j])
			{
				total++;
				j++;
			}
			free(split);
		}
		else
			total++;
		i++;
	}
	return (total);
}
