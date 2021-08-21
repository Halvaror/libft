/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-b <alopez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 17:54:22 by alopez-b          #+#    #+#             */
/*   Updated: 2021/08/21 18:24:17 by alopez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_calloc(size_t count, size_t size)
{
	int	*ptr;

	if (count == 0 || size == 0)
	{
		size = 1;
		count = 1;
	}
	ptr = malloc (count * size);
	ptr = ft_bzero(ptr, count * size);
	return (ptr);
}
