/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acretu <acretu@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 15:36:43 by acretu            #+#    #+#             */
/*   Updated: 2021/11/19 09:37:11 by acretu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(char const *s, int c)
{
	char		*ret;

	ret = NULL;
	while (*s != '\0')
	{
		if (*s == c)
		{
			ret = (char *) s;
			return (ret);
		}
		s++;
	}
	if (*s == '\0' && c == 0)
	{
		ret = (char *) s;
		return (ret);
	}
	return (NULL);
}
