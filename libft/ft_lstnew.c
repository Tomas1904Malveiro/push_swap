/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochaves <tochaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 10:06:22 by tochaves          #+#    #+#             */
/*   Updated: 2026/04/18 10:52:27 by tochaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*no;

	no = malloc(sizeof(t_list));
	if (!no)
	{
		return (NULL);
	}
	no->content = content;
	no->next = NULL;
	return (no);
}
/* #include <stdio.h>
int	main(void)
{
	char str[] = "ola";
	t_list *no = ft_lstnew(str);
	printf("%s\n", (char *)no->content);
	printf("%p\n", no->next);
	free(no);
} */