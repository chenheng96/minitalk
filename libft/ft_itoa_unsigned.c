/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_unsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchong <cchong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 10:30:04 by cchong            #+#    #+#             */
/*   Updated: 2022/05/06 10:29:21 by cchong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Convert unsigned int to string with digits in any base.
Need to provide base string.
*/

static int	count_memory(unsigned int nbr, int base)
{
	unsigned int	memorycount;

	memorycount = 0;
	if (nbr == 0)
		return (1);
	while (nbr > 0)
	{
		nbr /= base;
		memorycount++;
	}
	return (memorycount);
}

char	*ft_itoa_unsigned(unsigned int nbr, char *basestr, int base)
{
	char	*str;
	int		memory;
	int		index;

	memory = count_memory(nbr, base);
	str = malloc(sizeof(char) * (memory + 1));
	if (str == NULL)
		return (NULL);
	str[memory] = '\0';
	index = memory - 1;
	if (nbr == 0)
		str[0] = '0';
	while (nbr > 0)
	{
		str[index--] = basestr[nbr % base];
		nbr /= base;
	}
	return (str);
}
