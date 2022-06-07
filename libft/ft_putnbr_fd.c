/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchong <cchong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 16:49:35 by cchong            #+#    #+#             */
/*   Updated: 2022/04/15 09:25:35 by cchong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Outputs the integer ’n’ to the given file descriptor.
*/

static void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

static void	ft_putnbr(int nb, int fd)
{
	if (nb == -2147483648)
	{
		ft_putchar('-', fd);
		ft_putnbr(21474, fd);
		ft_putnbr(83648, fd);
	}
	else
	{
		if (nb < 0)
		{
			ft_putchar('-', fd);
			nb = -nb;
		}
		if (nb > 9)
		{
			ft_putnbr(nb / 10, fd);
			nb = nb % 10;
		}
		if (nb < 10)
			ft_putchar(nb + '0', fd);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	ft_putnbr(n, fd);
}
