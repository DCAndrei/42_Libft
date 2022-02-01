/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acretu <acretu@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 17:00:05 by acretu            #+#    #+#             */
/*   Updated: 2022/01/18 21:02:30 by acretu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		len_s;
	size_t		len_ret;
	char		*ret;

	if (s == NULL)
		return (NULL);
	len_s = ft_strlen(s);
	if (start > len_s)
	{
		ret = (char *)malloc(sizeof(char));
		if (ret == NULL)
			return (NULL);
		*ret = '\0';
		return (ret);
	}
	len_ret = len_s - start;
	if (len < len_ret)
		len_ret = len;
	ret = (char *)malloc(len_ret + 1);
	if (ret == NULL)
		return (NULL);
	ft_strlcpy(ret, (s + start), len_ret + 1);
	return (ret);
}
