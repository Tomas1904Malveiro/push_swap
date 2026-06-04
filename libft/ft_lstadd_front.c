/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochaves <tochaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 10:53:17 by tochaves          #+#    #+#             */
/*   Updated: 2026/04/18 13:09:16 by tochaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/* #include <stdio.h>
int	main(void)
{
	t_list *lst;

	lst = NULL;
	ft_lstadd_front(&lst, ft_lstnew("bacano"));
	ft_lstadd_front(&lst, ft_lstnew("pessoal"));
	ft_lstadd_front(&lst, ft_lstnew("ola"));
	printf("%s\n", (char *)lst->content);
	printf("%s\n", (char *)lst->next->content);
	printf("%s\n", (char *)lst->next->next->content);
	free(lst);
} */