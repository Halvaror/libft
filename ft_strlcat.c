/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-b <alopez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 21:35:01 by alopez-b          #+#    #+#             */
/*   Updated: 2021/07/10 21:14:39 by alopez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = 0;
	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	a = ft_strlen(dest);
	b = 0;
	while (src[b] != '\0' && a + 1 < size)
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[a] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[b]));
}
