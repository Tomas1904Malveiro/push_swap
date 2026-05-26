/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochaves <tochaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 17:31:41 by tochaves          #+#    #+#             */
/*   Updated: 2026/04/17 17:58:46 by tochaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	if (!s || !f)
	{
		return ;
	}
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/* void f(unsigned int i, char *c)
{
	(void)i;
	*c = *c + 1;
}
#include <stdio.h>

int	main(void)
{
	char str[] = "ace";
	ft_striteri(str, f);
	printf("%s\n", str);
} */