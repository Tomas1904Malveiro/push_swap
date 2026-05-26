/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochaves <tochaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 12:43:00 by tochaves          #+#    #+#             */
/*   Updated: 2026/04/18 13:13:20 by tochaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
/* #include <stdio.h>
int	main(void)
{
	t_list *lst;
	lst = NULL;
	ft_lstadd_back(&lst, ft_lstnew("ola"));
	ft_lstadd_back(&lst, ft_lstnew("pessoal"));
	ft_lstadd_back(&lst, ft_lstnew("bacano"));
	printf("%s\n", (char *)lst->content);
	printf("%s\n", (char *)lst->next->content);
	printf("%s\n", (char *)lst->next->next->content);
	free(lst);
} */