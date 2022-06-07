/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchong <cchong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 11:54:41 by cchong            #+#    #+#             */
/*   Updated: 2022/04/15 10:02:34 by cchong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Returns a pointer to a new string which is a duplicate of the string s. Memory
for the new string is obtained with malloc(3), and can be freed with free(3).
*/

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		i;

	if (s1 == NULL)
		s1 = "(null)";
	i = ft_strlen(s1);
	str = malloc(sizeof(char) * (i + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != 0)
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
