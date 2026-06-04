/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochaves <tochaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 13:55:07 by tochaves          #+#    #+#             */
/*   Updated: 2026/04/21 14:01:18 by tochaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (i < n - 1 && s1[i] == s2[i] && s1[i] && s2[i])
	{
		i++;
	}
	return (((unsigned char)s1[i] - (unsigned char)s2[i]));
}
/* #include <stdio.h>
int	main(void)
{
	int n = 3;
	printf("%d\n", ft_strncmp("ola", "olx", n));
	printf("%d\n", ft_strncmp("olx", "ola", n));
	printf("%d\n", ft_strncmp("ola", "ola", n));
} */