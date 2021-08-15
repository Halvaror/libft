/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-b <alopez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 18:47:15 by alopez-b          #+#    #+#             */
/*   Updated: 2021/08/15 17:22:32 by alopez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	overflow(char *d, const char *s, int n)
{
	int	i;

	i = (int)n - 1;
	while (i != -1)
	{
		d[i] = s[i];
		i--;
	}
	return (*d);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char			*d;
	const char		*s;
	int				i;

	d = dest;
	s = src;
	if ((s == NULL) && (d == NULL))
		return (NULL);
	if ((s < d) && (d < s + n))
		overflow(d, s, (int)n);
	else
	{
		i = 0;
		while (i < (int)n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (d);
}
