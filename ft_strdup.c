/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-b <alopez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 18:26:49 by alopez-b          #+#    #+#             */
/*   Updated: 2021/08/21 19:46:47 by alopez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int	i;
	const char	*s2;

	i = ft_strlen((char *)s1) + 1;
	s2 = malloc (i);
	return (memcpy((char *)s2, s1, i));
}

int main()
{
	const char s1[]="hola mundo";
	size_t	i;

	i = ft_strlen(s1);
	printf("original: %s \n", strdup(s1));
	printf("original: %s \n", ft_strdup(s1));
}
