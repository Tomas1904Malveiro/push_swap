/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochaves <tochaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 13:29:48 by tochaves          #+#    #+#             */
/*   Updated: 2026/05/27 11:18:36 by tochaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <unistd.h>
# include <stdlib.h>

typedef struct stack
{
	int	*data;
	int	size;
	int	top;
}	t_stack;

t_stack		*stack_new(int size);
void		stack_free(t_stack *s);
int			stack_is_sorted(t_stack *s);
int			is_number(char *s);
int			is_duplicate(t_stack *s, int n);
void		error_exit(t_stack *a, t_stack *b);
double		compute_disorder(t_stack *a);
void		parse_args(int argc, char **argv, t_stack *a, t_stack *b);
int			count_args(int argc, char **argv);
void		free_result(char **result, size_t i);
void		stack_push(t_stack *s, int n);
int			stack_pop(t_stack *s);
int			stack_peek(t_stack *s);
int			stack_min(t_stack *s);
int			stack_max(t_stack *s);
void		selection_sort(t_stack *a, t_stack *b);
void		sa(t_stack *a);
void		sb(t_stack *b);
void		ss(t_stack *a, t_stack *b);
void		pa(t_stack *a, t_stack *b);
void		pb(t_stack *a, t_stack *b);
void		ra(t_stack *a);
void		rb(t_stack *b);
void		rr(t_stack *a, t_stack *b);
void		rra(t_stack *a);
void		rrb(t_stack *b);
void		rrr(t_stack *a, t_stack *b);

#endif
