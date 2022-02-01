/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acretu <acretu@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 15:57:45 by acretu            #+#    #+#             */
/*   Updated: 2022/01/18 21:02:22 by acretu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		*ret;
	size_t		len;

	len = ft_strlen(s);
	ret = (char *) s;
	if (c == 0)
		return (ret + len);
	while (len > 0)
	{
		if (*(ret + len) == c)
			return (ret + len);
		len--;
	}
	if (*ret == c)
		return (ret);
	return (NULL);
}
