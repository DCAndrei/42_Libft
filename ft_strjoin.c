/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acretu <acretu@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 18:15:40 by acretu            #+#    #+#             */
/*   Updated: 2022/01/18 21:01:50 by acretu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*ret;
	size_t		t_len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	t_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	ret = (char *)malloc(sizeof(char) * t_len);
	if (ret == NULL)
		return (NULL);
	if (ft_strlcpy(ret, s1, ft_strlen(s1) + 1) != ft_strlen(s1))
		return (NULL);
	if (ft_strlcat(ret, s2, t_len) < (t_len - 1))
		return (NULL);
	return (ret);
}
