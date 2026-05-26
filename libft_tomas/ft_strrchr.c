/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochaves <tochaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 13:34:22 by tochaves          #+#    #+#             */
/*   Updated: 2026/04/27 09:31:52 by tochaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = NULL;
	while (*s)
	{
		if (*s == (char)c)
		{
			last = ((char *)s);
		}
		s++;
	}
	if (*s == (char)c)
	{
		last = ((char *)s);
	}
	return (last);
}
/*  #include <stdio.h>
int	main(void)
{
	char str[] = "ananas";
	char *result = ft_strrchr(str, 'a');
	printf("%s", result);
}  */