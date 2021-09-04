/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-b <alopez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 19:28:20 by alopez-b          #+#    #+#             */
/*   Updated: 2021/09/04 19:34:25 by alopez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void ft_putnbr_fd(int n, int fd)
{
	unsigned int	res;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		res = (unsigned int)(n * -1);
	}
	else
		res = (unsigned int)n;
	if (res >= 10)
		ft_putnbr_fd(res / 10, fd);
	ft_putchar_fd((char)(res % 10 + 48), fd);
}