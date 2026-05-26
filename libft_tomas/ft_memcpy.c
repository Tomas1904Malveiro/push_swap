/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochaves <tochaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 14:15:05 by tochaves          #+#    #+#             */
/*   Updated: 2026/04/23 15:39:16 by tochaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
	{
		return (NULL);
	}
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	while (n > i)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/* #include <stdio.h>

int	main(void)
{
	char src[] = "ola";
	char dest[4];
	ft_memcpy(dest, src, 4);
	printf("%s", dest);
} */