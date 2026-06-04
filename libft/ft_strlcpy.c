/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochaves <tochaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 16:17:46 by tochaves          #+#    #+#             */
/*   Updated: 2026/04/14 16:55:16 by tochaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (src[len])
	{
		len++;
	}
	if (dsize == 0)
	{
		return (len);
	}
	while (src[i] && i < dsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
/* #include <stdio.h>

int	main(void)
{
	char src[] = "ola";
	char dst[4];
	size_t dsize = 4;
	size_t len = ft_strlcpy(dst, src, dsize);
	printf("%zu", len);
} */