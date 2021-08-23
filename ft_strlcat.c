/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-b <alopez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 21:35:01 by alopez-b          #+#    #+#             */
/*   Updated: 2021/08/23 21:14:38 by alopez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_strlenn(char *str)
{
	unsigned int	length;

	length = 0;
	while (*str != '\0')
	{
		length++;
		str++;
	}
	return (length);
}

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = 0;
	if (size <= ft_strlen(dest))
		return (size + ft_strlenn(src));
	a = ft_strlenn(dest);
	b = 0;
	while (src[b] != '\0' && a + 1 < size)
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[a] = '\0';
	return (ft_strlenn(dest) + ft_strlenn(&src[b]));
}
