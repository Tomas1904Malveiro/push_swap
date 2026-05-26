/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochaves <tochaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 10:58:03 by tochaves          #+#    #+#             */
/*   Updated: 2026/04/22 16:07:06 by tochaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*copia;
	size_t	i;

	i = 0;
	copia = malloc(ft_strlen(s) + 1);
	if (!copia)
	{
		return (NULL);
	}
	while (i < ft_strlen(s))
	{
		copia[i] = s[i];
		i++;
	}
	copia[i] = '\0';
	return (copia);
}
/* #include <stdio.h>
int	main(void)
{
	char str[] = "ola";
	char *copia = ft_strdup(str);
	printf("%s", copia);
	free(copia);
} */
