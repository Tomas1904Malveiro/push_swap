/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochaves <tochaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 15:07:10 by tochaves          #+#    #+#             */
/*   Updated: 2026/04/20 16:54:31 by tochaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;

	if (!lst || !del)
	{
		return ;
	}
	while (*lst)
	{
		next = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next;
	}
	*lst = NULL;
}
/* void del(void *next)
{
	free(next);
}
#include <stdio.h>

int	main(void)
{
	t_list *lst;
	int *num;
	num = malloc(sizeof(int));
	*num = 42;
	lst = ft_lstnew(num);
	printf("%d\n", *(int *)lst->content);
	ft_lstclear(&lst, del);
	printf("%p\n", (void *)lst);
} */