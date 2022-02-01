/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acretu <acretu@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 10:47:16 by acretu            #+#    #+#             */
/*   Updated: 2022/01/18 21:00:53 by acretu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dst;
	unsigned char const	*source;

	dst = (unsigned char *)dest;
	source = (unsigned char const *)src;
	if (source > dst)
	{
		while (n-- > 0)
		{
			*dst = *source;
			dst++;
			source++;
		}
	}
	else if (source < dst)
	{
		while (n-- > 0)
			dst[n] = source[n];
	}
	return (dest);
}
