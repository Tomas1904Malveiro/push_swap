/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochaves <tochaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 17:20:41 by tochaves          #+#    #+#             */
/*   Updated: 2026/04/20 18:24:48 by tochaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*last;
	t_list	*node;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	new = NULL;
	last = NULL;
	while (lst)
	{
		content = f(lst->content);
		node = ft_lstnew(content);
		if (!node)
			return (del(content), ft_lstclear(&new, del), NULL);
		if (!new)
			new = node;
		else
			last->next = node;
		last = node;
		lst = lst->next;
	}
	return (new);
}
/* void	*f(void *content)
{
	int	*n;

	n = malloc(sizeof(int));
	*n = (*(int *)content) * 2;
	return (n);
}
void	del(void *content)
{
	free(content);
}
#include <stdio.h>

int	main(void)
{
	t_list *a;
	t_list *b;
	t_list *new;
	int *x;
	int *y;
	x = malloc(sizeof(int));
	y = malloc(sizeof(int));
	*x = 1;
	*y = 2;
	a = ft_lstnew(x);
	b = ft_lstnew(y);
	a->next = b;
	new = ft_lstmap(a, f, del);
	t_list *tmp = new;

	while (tmp)
	{
		printf("%d\n", *(int *)tmp->content);
		tmp = tmp->next;
	}
} */