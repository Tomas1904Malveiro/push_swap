/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochaves <tochaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 12:23:27 by tochaves          #+#    #+#             */
/*   Updated: 2026/04/18 12:42:03 by tochaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
	{
		return (NULL);
	}
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
/* #include <stdio.h>
int	main(void)
{
	t_list *lst;
	lst = NULL;
	ft_lstadd_front(&lst, ft_lstnew("ola"));
	ft_lstadd_front(&lst, ft_lstnew("bacano"));
	printf("%s", (char *)ft_lstlast(lst)->content);
	free(lst);
} */