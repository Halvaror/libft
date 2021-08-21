/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopezb <alopezb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 14:34:56 by alopezb           #+#    #+#             */
/*   Updated: 2021/08/19 18:30:30 by alopezb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (little[i] == '0')
		return ((char *)&big[i]);
	while ((little[j] != '\0') && (big[i] != '\0'))
	{
		if (little[j] == big[i])
		{
			while (little[j] == big[i])
			{
				if ((little[j] == big[i]) && (j + 1 == (int)len))
					return ((char *)&big[i - j]);
				i++;
				j++;
			}
		}
		else
			i++;
	}
	return (NULL);
}
