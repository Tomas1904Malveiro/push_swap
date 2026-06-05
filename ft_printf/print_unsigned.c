/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochaves <tochaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 15:17:30 by tochaves          #+#    #+#             */
/*   Updated: 2026/06/05 16:32:43 by tochaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_unsigned(unsigned int n)
{
	int	len;

	len = 0;
	if (n >= 10)
	{
		len += print_unsigned(n / 10);
	}
	write(2, &"0123456789"[n % 10], 1);
	len++;
	return (len);
}
/* int main()
{
	print_unsigned(-42);
} */