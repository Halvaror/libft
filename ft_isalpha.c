/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-b <alopez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 12:55:59 by alopez-b          #+#    #+#             */
/*   Updated: 2021/08/22 19:51:38 by alopez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

int main()
{
  int a;

  a = -1;
  while (a < 530)
  {
	printf ("numero: %d ", a);
    printf("funcion: %d ", isalpha(a));
	printf("replica: %d\n", ft_isalpha(a));
	a++;
  }

  return 0;
}