/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochaves <tochaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 11:16:08 by tochaves          #+#    #+#             */
/*   Updated: 2026/04/15 12:08:34 by tochaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (c - 32);
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
    printf("%c\n", ft_toupper(a));
    printf("%c\n", ft_toupper(B));
} */