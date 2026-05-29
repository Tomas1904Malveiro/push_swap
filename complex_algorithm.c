/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complex_algorithm.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochaves <tochaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 16:20:51 by tochaves          #+#    #+#             */
/*   Updated: 2026/05/29 16:46:44 by tochaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int get_bits(int n)
{
    int bits;
    bits = 0;
    while ((1 << bits) <= n)
    {
        bits++;
    }
    return(bits);
}

void radix_sort(t_stack *a, t_stack *b)
{
    int n;
    int max_bits;
    int i;

    n = a->top - 1;
    max_bits = get_bits(n);
    i = 0;
    while(i < max_bits)
    {
        if((a->data[a->top] >> max_bits) & 1)
            ra(a);
        else
            pb(a, b);
        i++;
    }    
}
