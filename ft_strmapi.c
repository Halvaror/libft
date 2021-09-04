/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-b <alopez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 18:32:15 by alopez-b          #+#    #+#             */
/*   Updated: 2021/09/04 19:03:13 by alopez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
	char 	*string;
	int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	string = ft_calloc(sizeof(char), (ft_strlen(s) + 1));
	if (!string)
		return (NULL);
	while (s[i] != '\0')
	{
		string[i] = (f)(i, s[i]);
		i++;
	}
	return (string);
}