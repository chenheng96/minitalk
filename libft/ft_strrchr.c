/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchong <cchong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 11:55:21 by cchong            #+#    #+#             */
/*   Updated: 2022/04/15 10:19:57 by cchong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Returns a pointer to the last occurrence of the character c in the string s.
*/

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (*s != '\0')
	{
		s++;
		i++;
	}
	while (i > 0)
	{
		if (*s == (char)c)
			return ((char *)s);
		s--;
		i--;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (0);
}
