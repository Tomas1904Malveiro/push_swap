/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochaves <tochaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 17:26:57 by tochaves          #+#    #+#             */
/*   Updated: 2026/06/05 16:32:41 by tochaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_string(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		write(2, "(null)", 6);
		return (6);
	}
	while (str[i])
	{
		write(2, &str[i], 1);
		i++;
	}
	return (i);
}
/* int main()
{
	print_string("ola");
} */