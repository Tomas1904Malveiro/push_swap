/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochaves <tochaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 14:42:13 by tochaves          #+#    #+#             */
/*   Updated: 2026/04/16 17:43:01 by tochaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_word(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
		{
			i++;
		}
		if (s[i] && s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
			{
				i++;
			}
		}
	}
	return (count);
}

char	*make_word(char const *s, size_t start, size_t len)
{
	char	*word;
	size_t	i;

	i = 0;
	word = malloc(len + 1);
	if (!word)
	{
		return (NULL);
	}
	while (i < len)
	{
		word[i] = s[start + i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

size_t	next_word(char const *s, size_t *j, char c)
{
	size_t	start;

	while (s[*j] && s[*j] == c)
	{
		(*j)++;
	}
	start = *j;
	while (s[*j] && s[*j] != c)
	{
		(*j)++;
	}
	return (start);
}

void	free_result(char **result, size_t i)
{
	while (i > 0)
	{
		i--;
		free(result[i]);
	}
	free(result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	result = malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (!result)
		return (NULL);
	while (s[j])
	{
		start = next_word(s, &j, c);
		if (!s[start])
			break ;
		result[i] = make_word(s, start, j - start);
		if (!result[i])
			return (free_result(result, i), NULL);
		i++;
	}
	result[i] = NULL;
	return (result);
}
/* #include <stdio.h>

int	main(void)
{
	char **result;
	int	i;
	i = 0;

	result = ft_split("ola   pessoal    bacano", ' ');
	if (!result)
		return (1);
	while (result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
	free(result);
	return (0);
} */
