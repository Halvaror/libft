/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-b <alopez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 21:55:03 by alopez-b          #+#    #+#             */
/*   Updated: 2021/08/25 13:23:44 by alopez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	size;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	size = ft_strlen(s1) + ft_strlen(s2);
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	str = malloc ((size + 1 ) * sizeof(char));
	if (!str)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = (char)s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[i] = (char)s2[j];
		j++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
