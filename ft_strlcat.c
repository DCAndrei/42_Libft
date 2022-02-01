/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acretu <acretu@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 10:37:55 by acretu            #+#    #+#             */
/*   Updated: 2021/11/22 20:50:58 by acretu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_dlen(char *dst, size_t size);

size_t	ft_strlcat(char *dst, char const *src, size_t size)
{
	char		*d;
	char const	*s;
	size_t		d_size;
	size_t		d_len;

	d = dst;
	s = src;
	d_len = ft_dlen(dst, size);
	d = dst + d_len;
	d_size = size - d_len;
	if (d_size == 0)
		return (d_len + ft_strlen(s));
	while (*s != '\0')
	{
		if (d_size != 1)
		{
			*d = *s;
			d++;
			d_size--;
		}
		s++;
	}
	*d = '\0';
	return (d_len + (s - src));
}

static	size_t	ft_dlen(char *dst, size_t size)
{
	char		*d;
	size_t		d_len;

	d = dst;
	while (size != 0 && *d != '\0')
	{
		d++;
		size--;
	}
	d_len = d - dst;
	return (d_len);
}
