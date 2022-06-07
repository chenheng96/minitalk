/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchong <cchong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 14:30:08 by cchong            #+#    #+#             */
/*   Updated: 2022/04/15 08:56:32 by cchong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Apply f(x) on each node's content, creates a new list resulting of the
successive applications of the function ’f’. The ’del’ function is used to
delete the content of a node if needed.
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*newnode;

	newlist = NULL;
	while (lst != NULL)
	{
		newnode = ft_lstnew(f(lst->content));
		if (newnode == NULL)
			return (NULL);
		ft_lstadd_back(&newlist, newnode);
		if (ft_lstlast(lst) == NULL)
			ft_lstclear(&newlist, del);
		lst = lst->next;
	}
	return (newlist);
}
