/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochaves <tochaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 11:33:40 by tochaves          #+#    #+#             */
/*   Updated: 2026/04/16 12:47:13 by tochaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*copia;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		len = 0;
	}
	else if (start + len > ft_strlen(s))
	{
		len = ft_strlen(s) - start;
	}
	copia = malloc(len + 1);
	if (!copia)
		return (NULL);
	while (i < len)
	{
		copia[i] = s[start + i];
		i++;
	}
	copia[i] = '\0';
	return (copia);
}
/* #include <stdio.h>

int	main(void)
{
	char str[] = "bacano";
	char *copia;
	copia = ft_substr(str, 2, 4);
	printf("%s", copia);
	free(copia);
} */
