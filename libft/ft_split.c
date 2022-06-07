/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchong <cchong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 09:51:01 by cchong            #+#    #+#             */
/*   Updated: 2022/04/15 10:29:43 by cchong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Allocates (with malloc(3)) and returns an array of strings obtained by
splitting ’s’ using the character ’c’ as a delimiter. The array must end
with a NULL pointer.
*/

static int	isseparator(char c, char d)
{
	return (c == d || c == 0);
}

static int	count_strings(char *str, char d)
{
	int	stringcount;

	stringcount = 0;
	while (*str != '\0')
	{
		while (*str != '\0' && isseparator(*str, d) == 1)
			str++;
		if (*str != '\0')
			stringcount++;
		while (*str != '\0' && isseparator(*str, d) == 0)
			str++;
	}
	return (stringcount);
}

static int	count_wordstrlen(char *str, char d)
{
	int	i;

	i = 0;
	while (str[i] && isseparator(str[i], d) == 0)
		i++;
	return (i);
}

static char	*putword(char *str, char d)
{
	int		len_word;
	int		i;
	char	*word;

	i = 0;
	len_word = count_wordstrlen(str, d);
	word = (char *)malloc(sizeof(char) * (len_word + 1));
	if (word == NULL)
		return (NULL);
	while (i < len_word)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	int		arrindex;

	if (s == NULL)
		return (NULL);
	arrindex = 0;
	strings = (char **)malloc(sizeof(char *)
			* (count_strings((char *)s, c) + 1));
	if (strings == NULL)
		return (NULL);
	while (*s != '\0')
	{
		while (*s != '\0' && isseparator(*s, c) == 1)
			s++;
		if (*s != '\0')
		{
			strings[arrindex] = putword((char *)s, c);
			arrindex++;
		}
		while (*s && isseparator(*s, c) == 0)
			s++;
	}
	strings[arrindex] = 0;
	return (strings);
}
