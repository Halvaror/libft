/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-b <alopez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 14:34:56 by alopezb           #+#    #+#             */
/*   Updated: 2021/08/24 19:23:44 by alopez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (little[i] == '\0')
		return ((char *)&big[i]);
	while ((little[j] != '\0') && (big[i] != '\0') && (i < len))
	{
		if (little[j] == big[i])
		{
			while (little[j] == big[i] && (i < len))
			{
				if ((little[j] == big[i]) && (little[j + 1] == '\0') && (j + 1 < len))
					return ((char *)&big[i - j]);
				i++;
				j++;
			}
		}
		else
			i++;
			j = 0;
	}
	return (NULL);
}
