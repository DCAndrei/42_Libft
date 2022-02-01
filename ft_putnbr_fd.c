/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acretu <acretu@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 08:04:09 by acretu            #+#    #+#             */
/*   Updated: 2021/11/21 11:41:28 by acretu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
in some compilers the result of % can be negative
why is line 33 & 34
*/

#include "libft.h"

static void	print_poz_nbr(int n, int fd);

void	ft_putnbr_fd(int n, int fd)
{
	char		c;
	int			i;

	if (n == 0)
	{
		c = '0';
		write(fd, &c, 1);
	}
	else if (n < 0)
	{
		write(fd, "-", 1);
		i = n % 10;
		if (i < 0)
			i = -i;
		c = '0' + i;
		n = n / 10;
		n = -n;
		print_poz_nbr(n, fd);
		write(fd, &c, 1);
	}
	else
		print_poz_nbr(n, fd);
}

static	void	print_poz_nbr(int n, int fd)
{
	char		c;

	if (n == 0)
		return ;
	print_poz_nbr(n / 10, fd);
	c = '0' + (n % 10);
	write(fd, &c, 1);
}
