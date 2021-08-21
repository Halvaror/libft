/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-b <alopez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 20:09:32 by alopez-b          #+#    #+#             */
/*   Updated: 2021/08/21 21:36:18 by alopez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char 	*str;
	size_t	i;

	i = 0;
	if (s[0] == 0)
		return (NULL);
	if (ft_strlen(s) < start)
		return (NULL);
	str = malloc (len);
	while (i < len)
	{
		str[i] = s[start];
		start++;
		i++;
	}
	return(str);
}
