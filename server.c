/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchong <cchong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 10:36:58 by cchong            #+#    #+#             */
/*   Updated: 2022/05/30 11:08:33 by cchong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	sig_handler(int sig, siginfo_t *info, void *ucontext)
{
	static int	i;
	static char	c;
	int			bit;

	(void)(*ucontext);
	if (sig == SIGUSR2)
		bit = 0;
	else
		bit = 1;
	c <<= 1;
	c += bit;
	i++;
	if (i == 8)
	{
		write(1, &c, 1);
		if (c == '\0')
		{
			write(1, "\n", 1);
			kill(info->si_pid, SIGUSR1);
		}
		i = 0;
		c = 0;
	}
}

int	main(void)
{
	struct sigaction	sa;
	pid_t				pid;

	sa.sa_sigaction = &sig_handler;
	sa.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	pid = (pid_t)getpid();
	ft_putnbr_fd((int)pid, 1);
	write(1, "\n", 1);
	while (1)
		pause();
	return (0);
}
