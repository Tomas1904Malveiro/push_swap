/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochaves <tochaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 17:39:18 by tochaves          #+#    #+#             */
/*   Updated: 2026/04/21 13:46:20 by tochaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			total;
	size_t			i;
	void			*ptr;
	unsigned char	*p;

	i = 0;
	total = nmemb * size;
	if (nmemb != 0 && total / nmemb != size)
	{
		return (NULL);
	}
	ptr = malloc(total);
	if (!ptr)
	{
		return (NULL);
	}
	p = ptr;
	while (i < total)
	{
		p[i] = 0;
		i++;
	}
	return (ptr);
}
/* #include <stdio.h>
int	main(void)
{
	void *result = ft_calloc(1, sizeof(char));
	printf("%p\n", result);
	free(result);
} */