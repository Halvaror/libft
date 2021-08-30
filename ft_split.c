/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-b <alopez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 14:26:38 by alopez-b          #+#    #+#             */
/*   Updated: 2021/08/30 20:58:32 by alopez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	stringcount(const char *s, char c)
{
	size_t	i;
	int	count;

	i = 0;
	count = 0;
	if(s == '\0')
		return(0);
	while (i < ft_strlen(s))
	{
		if (s[i] == c && s[i + 1] == '\0')
			i++;
		while (s[i] == c && s[i + 1] == c)
			i++;
		while(s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
		{
			count++;
			i++;
		}
		i++;
	}
	return (count + 1);
}

static int	stringlength(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		while(s[i] != c)
			i++;
		break;
	}
	if (c == '\0')
		return (i);
	return (i);
}

static int	stringposition(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (c == s[i])
			i++;
		else
			break;
	}
	if (c == '\0')
		return (i);
	return (i);
}
char	**ft_split(char const *s, char c)
{
	char	**array;
	int		index;
	int		sindex;
	int		length;
	int		position;

	length = 0;
	position = 0;
	index = 0;
	sindex = 0;
	if(!s)
		return (NULL);
	array = ft_calloc(sizeof(char *), (stringcount(s,c) + 1));
	if (!array)
		return (NULL);
	while (index < stringcount(s,c))
	{
		sindex = sindex + stringposition(&s[sindex], c);
		length = stringlength(&s[sindex], c);
		array[index] = ft_substr(s, sindex, length);
		sindex = sindex + length;
		index++;
	}
	return (array);
}
int main()
{
	char **split;
	const char	s[]=" tripouille 42 ";
	char c;
	int	i = 0;
	
	c = ' ';
	split = ft_split(s, c);
	if (!split)
		return (0);
	while (split[i])
	{
		printf("frase %d: %s\n", i, split[i]);
		i++;
	}
}