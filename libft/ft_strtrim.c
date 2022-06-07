/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchong <cchong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 09:49:27 by cchong            #+#    #+#             */
/*   Updated: 2022/04/15 10:20:39 by cchong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters
specified in ’set’ removed from the beginning and the end of the string.
*/

int	findfrontindex(char const *s1, char const *set);
int	findbackindex(char const *s1, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	int				frontindex;
	int				backindex;
	unsigned int	k;
	int				l;
	char			*trim_str;

	if (s1 == NULL || set == NULL)
		return (NULL);
	frontindex = findfrontindex(s1, set);
	backindex = findbackindex(s1, set);
	if ((backindex - frontindex) < 0)
		k = 0;
	else
		k = backindex - frontindex + 1;
	trim_str = malloc(sizeof(char) * (k + 1));
	if (trim_str == NULL)
		return (NULL);
	l = 0;
	while (s1[frontindex] != '\0' && frontindex <= backindex)
		trim_str[l++] = s1[frontindex++];
	trim_str[l] = '\0';
	return (trim_str);
}

int	findfrontindex(char const *s1, char const *set)
{
	int	j;
	int	frontindex;

	frontindex = 0;
	while (s1[frontindex] != '\0')
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (s1[frontindex] == set[j])
				break ;
			j++;
		}
		if (set[j] == '\0')
		{
			return (frontindex);
		}
		frontindex++;
	}
	frontindex--;
	return (frontindex);
}

int	findbackindex(char const *s1, char const *set)
{
	int	j;
	int	backindex;
	int	oristrlen;

	oristrlen = 0;
	while (s1[oristrlen] != '\0')
		oristrlen++;
	if (oristrlen == 0)
		return (0);
	backindex = oristrlen - 1;
	while (backindex > 0)
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (s1[backindex] == set[j])
				break ;
			j++;
		}
		if (set[j] == '\0')
			return (backindex);
		backindex--;
	}
	return (backindex);
}
