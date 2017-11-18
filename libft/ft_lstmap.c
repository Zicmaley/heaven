/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlykhodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 15:34:05 by vlykhodi          #+#    #+#             */
/*   Updated: 2017/11/17 15:46:12 by vlykhodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*list;

	if (lst)
	{
		if (!lst)
			return (NULL);
		list = f(lst);
		new = list;
		while (lst->next)
		{
			lst = lst->next;
			if (!(list->next = f(lst)))
			{
				free(list->next);
				return (NULL);
			}
			list = list->next;
		}
		return (new);
	}
	return (NULL);
}
