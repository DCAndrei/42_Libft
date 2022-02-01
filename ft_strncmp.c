/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acretu <acretu@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:16:14 by acretu            #+#    #+#             */
/*   Updated: 2021/11/22 16:50:13 by acretu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char const	*t1;
	unsigned char const	*t2;

	t1 = (unsigned char const *) s1;
	t2 = (unsigned char const *) s2;
	if (n == 0)
		return (0);
	while (*t1 != '\0' && *t1 == *t2 && n > 1)
	{
		t1++;
		t2++;
		n--;
	}
	if (n == 1 && *t1 == *t2)
		return (0);
	else
		return (*t1 - *t2);
}
