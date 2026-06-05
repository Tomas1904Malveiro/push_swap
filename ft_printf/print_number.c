/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochaves <tochaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 17:51:29 by tochaves          #+#    #+#             */
/*   Updated: 2026/06/05 16:32:23 by tochaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_number(int n)
{
	long	nbr;
	int		len;

	len = 0;
	nbr = n;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
		len++;
	}
	if (nbr >= 10)
	{
		len += print_number(nbr / 10);
	}
	write(2, &"0123456789"[nbr % 10], 1);
	len++;
	return (len);
}
/* int main()
{
	print_number(42);
} */