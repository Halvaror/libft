/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-b <alopez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 16:36:52 by alopez-b          #+#    #+#             */
/*   Updated: 2021/09/06 22:11:42 by alopez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	numbers(const char *str, int i, int signe, int result)
{
	while (str[i] >= '0' && str[i] <= '9')
	{
		if ((result * signe) > 2147483647)
			return (-1);
		else if ((result * signe) < -2147483647)
			return (0);
		else
		{
			result = result * 10 + (str[i] - 48);
			i++;
		}
	}
	return (result);
}

int	ft_atoi(const char *str)
{
	int			i;
	int			signe;
	long long	result;

	i = 0;
	signe = 1;
	result = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\v')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe = signe * (-1);
		i++;
	}
	numbers (str, i, signe, result);
	return (result * signe);
}
