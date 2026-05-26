/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochaves <tochaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 10:34:31 by tochaves          #+#    #+#             */
/*   Updated: 2026/04/14 11:47:03 by tochaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A'
			&& c <= 'Z'))
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
	printf("%d\n", ft_isalnum(x));
	printf("%d\n", ft_isalnum(c));
} */