/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchong <cchong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 11:54:28 by cchong            #+#    #+#             */
/*   Updated: 2022/04/15 09:17:39 by cchong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Fills the first n bytes of the memory area pointed to by s with the constant
byte c.
*/

void	*ft_memset(void *b, int c, size_t n)
{
	size_t	i;
	char	*s;

	i = 0;
	s = b;
	while (i < n)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
