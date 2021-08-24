/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-b <alopez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 20:34:27 by alopez-b          #+#    #+#             */
/*   Updated: 2021/08/24 21:03:10 by alopez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	str = malloc (sizeof(char) * (ft_strlen(s1) + 1));
	if (!str)
		return (NULL);
	while (s1[i] != '\0')
	{
		printf("i: %zu", i);
		printf("j: %zu\n", j);
		if (s1[i] == set[j])
			i++;
		if (j >= ft_strlen(set))
			j = 0;
		else
			j++;
	}
	return (str);
}
	int	main()
	{
		printf("%s\n", ft_strtrim("    hola mundo", " "));
	}