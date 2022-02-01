/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acretu <acretu@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 09:32:38 by acretu            #+#    #+#             */
/*   Updated: 2022/01/18 20:59:18 by acretu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void		*ret;

	ret = malloc(nmemb * size);
	if (ret == NULL)
		return (ret);
	ft_memset(ret, 0, nmemb * size);
	return (ret);
}
