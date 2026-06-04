/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochaves <tochaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 12:07:22 by tochaves          #+#    #+#             */
/*   Updated: 2026/04/15 12:13:17 by tochaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (c + 32);
	}
	else
	{
		return (c);
	}
}
/* #include <stdio.h>
int main()
{
    char a = 'a';
    char B = 'B';
    printf("%c\n", ft_tolower(a));
    printf("%c\n", ft_tolower(B));
} */