/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchong <cchong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 10:36:54 by cchong            #+#    #+#             */
/*   Updated: 2022/05/30 11:14:52 by cchong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	send_binary(pid_t pid, char c)
{
	int	mask;

	mask = 128;
	while (mask > 0)
	{
		if ((c & mask) > 0)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		mask >>= 1;
		usleep(50);
	}
}

void	send_message(pid_t pid, char *str)
{
	while (*str != '\0')
	{
		send_binary(pid, *str);
		str++;
	}
	send_binary(pid, *str);
}

void	sig_handler(int sig)
{
	if (sig == SIGUSR1)
		write(1, "Msg received.\n", 14);
}

int	main(int argc, char **argv)
{
	struct sigaction	sa;
	pid_t				pid;
	char				*str;

	if (argc == 3)
	{
		sa.sa_handler = &sig_handler;
		sigaction(SIGUSR1, &sa, NULL);
		pid = (pid_t)ft_atoi(argv[1]);
		str = argv[2];
		send_message(pid, str);
	}
	else
		write(1, "Usage:./client PID MSG\n", 23);
}
