/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochaves <tochaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 10:47:37 by tochaves          #+#    #+#             */
/*   Updated: 2026/05/20 12:02:23 by tochaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void stack_push(t_stack *s, int n)
{
    if(s->top == s->size - 1)
        return ;
    s->top++;
    s->data[s->top] = n;
}

int stack_pop(t_stack *s);