/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acretu <acretu@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 08:29:00 by acretu            #+#    #+#             */
/*   Updated: 2021/11/17 09:29:54 by acretu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_find(const char *big, const char *little, size_t len);

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	if (*little == '\0')
		return ((char *)big);
	while (*big != '\0' && len > 0)
	{
		if (len < ft_strlen(little))
			return (NULL);
		if (*big == *little)
			if (ft_find(big, little, len))
				return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}

static	int	ft_find(const char *big, const char *little, size_t len)
{
	while (*little != '\0' && *little == *big && len)
	{
		little++;
		big++;
		len--;
		if (*little == '\0' || (len == 0 && *little == *big))
			return (1);
	}
	return (0);
}
