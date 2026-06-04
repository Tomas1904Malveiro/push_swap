/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochaves <tochaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 14:35:00 by tochaves          #+#    #+#             */
/*   Updated: 2026/04/20 15:41:00 by tochaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
	{
		return ;
	}
	del(lst->content);
	free(lst);
}
/* void del(void *content)
{
	free(content);
}
#include <stdio.h>

int	main(void)
{
	t_list *lst;
	char *str = malloc(4);
	str[0] = 'o';
	str[1] = 'l';
	str[2] = 'a';
	str[3] = '\0';
	lst = ft_lstnew(str);
	printf("%s\n", str);
	ft_lstdelone(lst, del);
	printf("%s\n", str);
} */
