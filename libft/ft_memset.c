/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochaves <tochaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 11:49:24 by tochaves          #+#    #+#             */
/*   Updated: 2026/04/14 12:23:27 by tochaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n > 0)
	{
		*str = (unsigned char)c;
		str++;
		n--;
	}
	return (s);
}
/* #include <stdio.h>

int	main(void)
{
	char str[] = "ola";
	ft_memset(str, 'x', 3);
	printf("%s", str);
} */