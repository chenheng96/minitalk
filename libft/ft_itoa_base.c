/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchong <cchong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 10:30:04 by cchong            #+#    #+#             */
/*   Updated: 2022/04/15 13:47:36 by cchong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Convert int to string with digits in any base. Need to provide base string.
*/

static int	count_memory(long n, int base)
{
	unsigned int	memorycount;

	memorycount = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		memorycount++;
	}
	while (n > 0)
	{
		n /= base;
		memorycount++;
	}
	return (memorycount);
}

char	*ft_itoa_base(int n, char *basestr, int base)
{
	char	*str;
	int		memory;
	int		index;
	long	nbr;

	nbr = n;
	memory = count_memory(nbr, base);
	str = malloc(sizeof(char) * (memory + 1));
	if (str == NULL)
		return (NULL);
	str[memory] = '\0';
	index = memory - 1;
	if (nbr == 0)
		str[0] = '0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		str[index--] = basestr[nbr % base];
		nbr /= base;
	}
	return (str);
}
