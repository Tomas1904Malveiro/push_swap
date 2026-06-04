/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochaves <tochaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 17:24:16 by tochaves          #+#    #+#             */
/*   Updated: 2026/04/15 11:12:37 by tochaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;
	size_t	j;

	dstlen = 0;
	srclen = 0;
	while (dst[dstlen] && dsize > dstlen)
		dstlen++;
	while (src[srclen])
		srclen++;
	if (dsize <= dstlen)
	{
		return (dsize + srclen);
	}
	i = dstlen;
	j = 0;
	while (src[j] && i + 1 < dsize)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dstlen + srclen);
}
/* #include <stdio.h>

int	main(void)
{
	char src[] = "ola";
	char dst[] = "bacano";
	size_t dsize;
	size_t cat;
    dsize = 10;
	cat = ft_strlcat(dst, src, dsize);
	printf("%zu", cat);
} */
