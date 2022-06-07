/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchong <cchong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 11:54:49 by cchong            #+#    #+#             */
/*   Updated: 2022/04/15 10:15:50 by cchong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Appends the NUL-terminated string src to the end of dst. It will append at
most size - strlen(dst) - 1 bytes, NUL-terminating the result.
*/

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;
	int		l;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	while (dst[i] != '\0')
	{
		i++;
		j++;
	}
	while (src[k] != '\0')
		k++;
	if (dstsize < j)
		return (k + dstsize);
	while (src[l] != '\0' && i < dstsize)
		dst[i++] = src[l++];
	if (i == dstsize)
		i--;
	if (j < dstsize)
		dst[i] = '\0';
	return (j + k);
}
