/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchong <cchong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 11:55:10 by cchong            #+#    #+#             */
/*   Updated: 2022/04/15 10:34:07 by cchong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Compares the two strings s1 and s2. It returns an integer less than, equal
to, or greater than zero if s1 is found, respectively, to be less than, to
match, or be greater than s2.
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s3;
	unsigned char	*s4;

	s3 = (unsigned char *) s1;
	s4 = (unsigned char *) s2;
	i = 0;
	while (i < n && s3[i] != 0 && s4[i] != 0)
	{
		if (s3[i] != s4[i])
			return (s3[i] - s4[i]);
		i++;
	}
	if (i < n)
	{	
		if (s3[i] != s4[i])
			return (s3[i] - s4[i]);
	}
	return (0);
}
