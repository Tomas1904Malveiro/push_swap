/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochaves <tochaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 16:54:33 by tochaves          #+#    #+#             */
/*   Updated: 2026/04/17 17:43:52 by tochaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	size_t	i;

	i = 0;
	if (!s || !f)
	{
		return (NULL);
	}
	result = malloc(ft_strlen(s) + 1);
	if (!result)
	{
		return (NULL);
	}
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
/* char f(unsigned int i, char c)
{
	(void)i;
	return(c + 1);
}
#include <stdio.h>

int	main(void)
{
	char str[] = "ola";
	char *result = ft_strmapi(str, f);
	printf("%s\n", result);
	free(result);
} */