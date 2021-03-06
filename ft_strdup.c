/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-b <alopez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 18:26:49 by alopez-b          #+#    #+#             */
/*   Updated: 2021/09/09 21:05:09 by alopez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int			i;
	const char	*s2;

	i = ft_strlen((char *)s1) + 1;
	s2 = malloc (i);
	if (!s2)
		return (NULL);
	return (ft_memcpy((char *)s2, s1, i));
}
