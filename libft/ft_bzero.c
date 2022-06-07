/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchong <cchong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 11:48:28 by cchong            #+#    #+#             */
/*   Updated: 2022/04/15 08:55:49 by cchong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Set n bytes of memory to '\0';
Use ft_memset to set n bytes of memory to '\0';
*/

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
