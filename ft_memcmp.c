/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acretu <acretu@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 07:48:13 by acretu            #+#    #+#             */
/*   Updated: 2021/11/23 12:56:40 by acretu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char const		*t1;
	unsigned char const		*t2;
	size_t					i;

	if (n == 0)
		return (0);
	t1 = (unsigned char const *)s1;
	t2 = (unsigned char const *)s2;
	i = 1;
	while (*t1 == *t2 && i < n)
	{
		t1++;
		t2++;
		i++;
	}
	return ((int)(*t1 - *t2));
}
