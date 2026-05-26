/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochaves <tochaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 11:41:57 by tochaves          #+#    #+#             */
/*   Updated: 2026/04/27 10:07:57 by tochaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}
/* #include <stdio.h>
int	main(void)
{
	t_list *lst;
	lst = NULL;
	ft_lstadd_front(&lst, ft_lstnew("amigo"));
	ft_lstadd_front(&lst, ft_lstnew("ola"));
	printf("%d", ft_lstsize(lst));
} */