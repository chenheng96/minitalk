/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchong <cchong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 11:54:22 by cchong            #+#    #+#             */
/*   Updated: 2022/04/15 09:10:45 by cchong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Copies n bytes from memory area src to memory area dest.  The memory areas may
overlap: copying takes place as though the bytes in src are first copied into
a temporary array that does not overlap src or dest, and the bytes are then
copied from the temporary array to dest.
*/

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*dststr;
	char	*srcstr;

	dststr = (char *)dst;
	srcstr = (char *)src;
	if (srcstr < dststr)
	{
		i = n;
		while (i-- > 0)
			dststr[i] = srcstr[i];
	}
	else if (srcstr > dststr)
	{
		i = 0;
		while (i < n)
		{
			dststr[i] = srcstr[i];
			i++;
		}
	}
	return (dststr);
}
