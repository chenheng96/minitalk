/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchong <cchong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 12:02:53 by cchong            #+#    #+#             */
/*   Updated: 2022/04/15 10:33:49 by cchong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Delete and free the given node and every successor of that node,
using the function ’del’ and free(3). Finally, the pointer to the list must
be set to NULL.
*/

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	while (*lst != NULL)
	{
		ft_lstdelone(*lst, del);
		*lst = (*lst)->next;
	}
}
