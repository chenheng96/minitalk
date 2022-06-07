/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchong <cchong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 16:44:42 by cchong            #+#    #+#             */
/*   Updated: 2022/04/15 09:26:24 by cchong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Outputs the string ’s’ to the given file descriptor.
*/

int	ft_putstr_fd(char *s, int fd)
{
	if (s == NULL)
		return (0);
	return (write (fd, s, ft_strlen(s)));
}
