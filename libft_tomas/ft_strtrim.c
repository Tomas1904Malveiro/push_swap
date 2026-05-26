/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochaves <tochaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 13:28:27 by tochaves          #+#    #+#             */
/*   Updated: 2026/04/16 14:41:37 by tochaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_set(char const *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	*result;

	i = 0;
	start = 0;
	if (!s1 || !set)
		return (NULL);
	end = ft_strlen(s1);
	while (s1[start] && ft_set(set, s1[start]))
		start++;
	while (end > start && ft_set(set, s1[end - 1]))
		end--;
	result = malloc(end - start + 1);
	if (!result)
		return (NULL);
	while (start < end)
	{
		result[i] = s1[start];
		i++;
		start++;
	}
	result[i] = '\0';
	return (result);
}
/* #include <stdio.h>
int	main(void)
{
	char str[] = "  ola  ";
	char set[] = " ";
	char *result = ft_strtrim(str, set);
	printf("%s", result);
	free(result);
} */
