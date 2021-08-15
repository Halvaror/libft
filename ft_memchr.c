/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-b <alopez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 18:46:11 by alopez-b          #+#    #+#             */
/*   Updated: 2021/08/15 19:25:45 by alopez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	int				i;
	unsigned char	*s;

	s = (unsigned char *)str;
	i = 0;
	while (i < (int)n)
	{
		if ((unsigned char)c == (unsigned char)s[i])
			return ((char *)&s[i]);
		else
			s++;
	}
	return (NULL);
}
