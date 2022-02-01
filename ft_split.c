/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acretu <acretu@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 17:08:03 by acretu            #+#    #+#             */
/*   Updated: 2021/11/19 09:34:34 by acretu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_s_size(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char		**array;
	const char	*s_init;
	size_t		size;
	size_t		i;

	if (s == NULL)
		return (NULL);
	s_init = s;
	array = NULL;
	size = ft_s_size(s, c);
	array = (char **)malloc(sizeof(char *) * (size + 1));
	if (array == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		while (*s == c && *s != '\0')
			s++;
		s_init = ft_strchr(s, c);
		*(array + i) = ft_substr(s, 0, (s_init - s));
		s = s_init + 1;
		i++;
	}
	*(array + i) = NULL;
	return (array);
}

static	size_t	ft_s_size(char const *s, char c)
{
	size_t		size;
	char const	*t;

	size = 0;
	if (*s == '\0')
		return (0);
	while (*s != '\0')
	{
		t = s;
		while (*t != '\0' && *t == c)
			t++;
		if (*t != '\0')
		{
			size++;
			t++;
		}
		while (*t != '\0' && *t != c)
			t++;
		s = t;
	}
	return (size);
}
