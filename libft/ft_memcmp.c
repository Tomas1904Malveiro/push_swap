/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochaves <tochaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 15:02:05 by tochaves          #+#    #+#             */
/*   Updated: 2026/04/15 15:24:34 by tochaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*a;
	const unsigned char	*b;

	i = 0;
	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	while (i < n)
	{
		if (a[i] != b[i])
		{
			return (a[i] - b[i]);
		}
		i++;
	}
	return (0);
}
/* #include <stdio.h>
int	main(void)
{
	size_t n = 3;
	printf("%d\n", ft_memcmp("ola", "olx", n));
	printf("%d\n", ft_memcmp("olx", "ola", n));
	printf("%d\n", ft_memcmp("ola", "ola", n));
} */