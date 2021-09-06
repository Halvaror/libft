/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-b <alopez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 14:34:56 by alopezb           #+#    #+#             */
/*   Updated: 2021/09/06 20:43:55 by alopez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (len < 0)
		len = ft_strlen(big);
	if (little[i] == '\0' || big == little)
		return ((char *)&big[i]);
	while ((little[j] != '\0') && (big[i] != '\0') && (i < len))
	{
		j = 0;
		while (little[j] == big[i + j] && ((i + j) < len))
		{
			if (little[j + 1] == '\0')
				return ((char *)big + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
#if DEBUG
int main()
{
	printf("original: %s\n", strnstr("aaabcabcd", "aaabc", 5));
	printf("funcion : %s\n", ft_strnstr("aaabcabcd", "aaabc", 5));
}
#endif