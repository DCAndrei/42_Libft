/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acretu <acretu@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 11:26:06 by acretu            #+#    #+#             */
/*   Updated: 2021/11/23 18:03:59 by acretu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_number(char const *nptr, int sign);

int	ft_atoi(char const *nptr)
{
	int		sign;

	while ((*nptr >= 9 && *nptr <= 13) || *nptr == 32)
		nptr++;
	sign = 1;
	if (*nptr == '-')
	{
		sign = -1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	return (ft_number(nptr, sign));
}

static	int	ft_number(char const *nptr, int sign)
{
	int			nb;
	int			digits;

	digits = 0;
	nb = 0;
	while (ft_isdigit(*nptr))
	{
		nb = nb * 10 + (*nptr - '0');
		nptr++;
		digits++;
	}
	if (digits > 19 && sign == 1)
		return (-1);
	else if (digits > 19)
		return (0);
	return (nb * sign);
}
