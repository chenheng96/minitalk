/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchong <cchong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 16:46:28 by cchong            #+#    #+#             */
/*   Updated: 2022/04/15 09:19:55 by cchong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Outputs the string ’s’ to the given file descriptor followed by a newline.
*/

void	ft_putendl_fd(char *s, int fd)
{
	if (s == NULL)
		return ;
	write (fd, s, ft_strlen(s));
	write (fd, "\n", 1);
}
