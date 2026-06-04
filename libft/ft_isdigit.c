/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochaves <tochaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 10:28:25 by tochaves          #+#    #+#             */
/*   Updated: 2026/04/14 11:46:30 by tochaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/* #include <stdio.h>

int	main(void)
{
	int x = '1';
	char c = 'c';
	printf("%d\n", ft_isdigit(x));
	printf("%d\n", ft_isdigit(c));
} */