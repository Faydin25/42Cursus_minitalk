/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faydin <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 19:57:44 by faydin            #+#    #+#             */
/*   Updated: 2022/03/07 19:57:46 by faydin           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	inttoasci(int pid)
{
	char	c;

	if (pid >= 10)
		inttoasci(pid / 10);
	c = (pid % 10) + 48;
	write(1, &c, 1);
}

int	ascitoint(char *str)
{
	int	number;

	number = 0;
	while (*str)
		number = (10 * number) + (*str++ - 48);
	return (number);
}

void	putstr(char *str)
{
	while (*str)
		write(1, &(*str++), 1);
	exit(0);
}
