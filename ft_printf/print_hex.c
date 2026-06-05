/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochaves <tochaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 11:33:33 by tochaves          #+#    #+#             */
/*   Updated: 2026/06/05 16:32:05 by tochaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex(unsigned int n, int uppercase)
{
	long	nbr;
	int		len;

	len = 0;
	nbr = n;
	if (nbr >= 16)
	{
		len += print_hex(nbr / 16, uppercase);
	}
	if (uppercase)
	{
		write(2, &"0123456789ABCDEF"[nbr % 16], 1);
		len++;
	}
	else
	{
		write(2, &"0123456789abcdef"[nbr % 16], 1);
		len++;
	}
	return (len);
}
/* int main()
{
	print_hex(255, 1);
} */