/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochaves <tochaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 16:24:08 by tochaves          #+#    #+#             */
/*   Updated: 2026/04/20 17:18:28 by tochaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
	{
		return ;
	}
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/* #include <stdio.h>
void	f(void *content)
{
	printf("%d\n", *(int *)content);
}

int	main(void)
{
	t_list	*a;
	t_list	*b;
	int		*x;
	int		*y;

	x = malloc(sizeof(int));
	y = malloc(sizeof(int));
	*x = 1;
	*y = 2;
	a = ft_lstnew(x);
	b = ft_lstnew(y);
	a->next = b;
	ft_lstiter(a, f);
} */