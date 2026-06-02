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

int	check_flags(int argc, char **argv, t_benchmark *bench)
{
	int	flag;
	flag = 0;
	if (argc > 1 && argv[1][0] == '-' && argv[1][1] == '-')
	{
		flag = get_flag(argv[1]);
	}
	if (argc > 1 && argv[1][0] == '-' && argv[1][1] == '-' && argv[1][2] == 'b')
	{
		if (get_flag(argv[2]) > 0)
			bench->benchmark_alg = get_flag(argv[2]);
	}
	return (flag);
}
void	bench_strategy(t_benchmark *bench, t_stack *a, t_stack *b)
{
	double	disorder;
	
	disorder = compute_disorder(a);
	if (bench->benchmark_alg == 1)
		printf("[bench] strategy: Simple / O(n^2)\n");
	else if(bench->benchmark_alg == 2)
		printf("[bench] strategy: Medium / O(n√n)\n");
	else if (bench->benchmark_alg == 3)
		printf("[bench] strategy: Complex / O(n log n)\n");
	else if (disorder < 0.2)
		printf("[bench] strategy: Adaptive / O(n^2)\n");
	else if (disorder <= 0.5)
		printf("[bench] strategy: Adaptive / O(n√n)\n");
	else
		printf("[bench] strategy: Adaptive / O(n log n)\n");
	if (bench->benchmark_alg == 1 || disorder < 0.2)
		selection_sort(a, b, bench);
	else if (bench->benchmark_alg == 2 || disorder < 0.5)
		chunk_sorting(a, b, bench);
	else
		radix_sort(a, b, bench);
}

void	bench_flag(t_benchmark *bench, t_stack *a, t_stack *b)
{
	double	disorder;
	
	disorder = compute_disorder(a);
	bench->benchmark_mode = 1;
	printf("[bench] disorder: %f%%\n", disorder);
	bench_strategy(bench, a, b);
	printf("[bench] total_ops: %d\n", bench->total_ops);
	printf("[bench] sa: %d sb: %d ss: %d ", bench->sa, bench->sb, bench->ss);
	printf("pa: %d pb: %d\n", bench->pa, bench->pb);
	printf("[bench] ra: %d rb: %d rr: %d ", bench->ra, bench->rb, bench->rr);
	printf("rra: %d rrb: %d rrr: %d\n", bench->rra, bench->rrb, bench->rrr);
}

void	sort_stack(int flag, t_stack *a, t_stack *b, t_benchmark *bench)
{
	double	disorder;

	if (flag == 1)
		selection_sort(a, b, bench);
	else if (flag == 2)
		chunk_sorting(a, b, bench);
	else if (flag == 3)
		radix_sort(a, b, bench);
	else if (flag == 4)
		bench_flag(bench, a, b);
	else
	{
		disorder = compute_disorder(a);
		if (disorder < 0.2)
			selection_sort(a, b, bench);
		else if (disorder <= 0.5)
			chunk_sorting(a, b, bench);
		else
			radix_sort(a, b, bench);
	}
}
