/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-b <alopez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 16:28:29 by alopez-b          #+#    #+#             */
/*   Updated: 2021/08/06 20:52:22 by alopez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *str, size_t n)
{
	unsigned int	i;
	unsigned char	*a;

	a = str;
	i = 0;
	while (i < n)
	{
		a[i] = 0;
		i++;
	}
	return (a);
}
