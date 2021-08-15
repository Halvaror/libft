/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-b <alopez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 15:53:34 by alopez-b          #+#    #+#             */
/*   Updated: 2021/08/07 20:25:33 by alopez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*a;

	a = str;
	i = 0;
	while (i < n)
	{
		a[i] = c;
		i++;
	}
	return (a);
}
