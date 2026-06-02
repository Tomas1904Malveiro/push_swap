/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochaves <tochaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 13:29:48 by tochaves          #+#    #+#             */
/*   Updated: 2026/05/29 16:47:05 by tochaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct stack
{
	int	*data;
	int	size;
	int	top;
}	t_stack;

typedef struct benchmark
{
	int benchmark_alg;
	int benchmark_mode;
	int	total_ops;
	int	sa;
	int	sb;
	int	ss;
	int	pa;
	int	pb;
	int	ra;
	int	rb;
	int	rr;
	int	rra;
	int	rrb;
	int rrr;
} t_benchmark;


t_stack		*stack_new(int size);
void		stack_free(t_stack *s);
int			stack_is_sorted(t_stack *s);
t_benchmark	*bench_stats(void);
int			is_number(char *s);
int			is_duplicate(t_stack *s, int n);
void		error_exit(t_stack *a, t_stack *b);
double		compute_disorder(t_stack *a);
void		parse_args(int argc, char **argv, t_stack *a, t_stack *b);
int			count_args(int argc, char **argv);
void		free_double(char **dest, int j);
void		stack_push(t_stack *s, int n);
int			ft_sqrt(int nb);
int			stack_peek(t_stack *s);
int			stack_min(t_stack *s);
int			stack_max(t_stack *s);
void		selection_sort(t_stack *a, t_stack *b, t_benchmark *bench);
void		chunk_sorting(t_stack *a, t_stack *b, t_benchmark *bench);
int 		check_flags(int argc, char **argv, t_benchmark *bench);
void		sort_stack(int flag, t_stack *a, t_stack *b, t_benchmark *bench);
void 		radix_sort(t_stack *a, t_stack *b, t_benchmark *bench);
void		sa(t_stack *a, t_benchmark *bench);
void		sb(t_stack *b, t_benchmark *bench);
void		ss(t_stack *a, t_stack *b, t_benchmark *bench);
void		pa(t_stack *a, t_stack *b, t_benchmark *bench);
void		pb(t_stack *a, t_stack *b, t_benchmark *bench);
void		ra(t_stack *a, t_benchmark *bench);
void		rb(t_stack *b, t_benchmark *bench);
void		rr(t_stack *a, t_stack *b, t_benchmark *bench);
void		rra(t_stack *a, t_benchmark *bench);
void		rrb(t_stack *b, t_benchmark *bench);
void		rrr(t_stack *a, t_stack *b, t_benchmark *bench);

#endif
