/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchong <cchong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 09:42:15 by cchong            #+#    #+#             */
/*   Updated: 2022/04/15 10:13:28 by cchong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Allocates (with malloc(3)) and returns a new string, which is the result of
the concatenation of ’s1’ and ’s2’.
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1len;
	size_t	s2len;
	char	*string;
	char	*startofstring;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	string = malloc(sizeof(char) * (s1len + s2len + 1));
	if (string == NULL)
		return (NULL);
	startofstring = string;
	while (*s1 != '\0')
		*string++ = *s1++;
	while (*s2 != '\0')
		*string++ = *s2++;
	*string = '\0';
	return (startofstring);
}
