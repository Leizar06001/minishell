/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signals.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphaelloussignian <raphaelloussignian@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:51:27 by rloussig          #+#    #+#             */
/*   Updated: 2023/07/31 14:59:54 by raphaellous      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

// int > Ctrl + C
// quit > Ctrl + backslash

void	handler_int(int sig)
{
	(void)sig;
	write(1, "\n", 1);
	rl_on_new_line();
	rl_replace_line("", 0);
	rl_redisplay();
}

void	handler_int_background(int sig)
{
	(void)sig;
}

void	handler_quit(int sig)
{
	(void)sig;
	printf("CTRL + /\n");
}

// CTRL + C > INT
// CTRL + \ > QUIT
