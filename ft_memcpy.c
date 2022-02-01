/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acretu <acretu@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:36:00 by acretu            #+#    #+#             */
/*   Updated: 2022/01/18 21:00:28 by acretu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*i;
	unsigned char const	*j;

	i = (unsigned char *)dest;
	j = (unsigned char const *)src;
	if (!i && !j && n)
		return (dest);
	while (n > 0)
	{
		*i = *j;
		i++;
		j++;
		n--;
	}
	return (dest);
}
