/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchong <cchong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 16:26:29 by cchong            #+#    #+#             */
/*   Updated: 2022/04/15 08:55:17 by cchong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Allocate memory for an array of nmemb elements of size bytes each and returns
a pointer to allocated memory, memory is set to zero.
*/

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;
	size_t	mul;

	mul = nmemb * size;
	if (mul / nmemb != size)
		return (NULL);
	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);
	ft_bzero(mem, nmemb * size);
	return (mem);
}
