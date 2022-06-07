/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchong <cchong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 11:54:56 by cchong            #+#    #+#             */
/*   Updated: 2022/04/15 10:16:50 by cchong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
copies up to size - 1 characters from the NUL-terminated string src to dst,
NUL-terminating the result.
*/

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	j;

	j = 0;
	while (j < dstsize && src[j] != '\0')
	{
		dst[j] = src[j];
		j++;
	}
	if (j == dstsize)
		j--;
	if (j < dstsize)
		dst[j] = '\0';
	return (ft_strlen(src));
}
