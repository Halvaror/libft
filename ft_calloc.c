/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-b <alopez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 17:54:22 by alopez-b          #+#    #+#             */
/*   Updated: 2021/08/23 21:29:01 by alopez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	*ptr;

	if (count == 0 || size == 0)
	{
		size = 1;
		count = 1;
	}
	ptr = malloc (count * size);
	if (!ptr)
		return (NULL);
	ptr = ft_bzero(ptr, count * size);
	return (ptr);
}
