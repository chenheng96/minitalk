/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchong <cchong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 11:54:14 by cchong            #+#    #+#             */
/*   Updated: 2022/04/15 09:15:19 by cchong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Copies n bytes from memory area src to memory area dst.
The memory areas must not overlap.
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*dststr;
	char	*srcstr;

	i = 0;
	dststr = (char *)dst;
	srcstr = (char *)src;
	while (i < n)
	{
		if (dststr == srcstr)
			return (0);
		dststr[i] = srcstr[i];
		i++;
	}
	return (dststr);
}
