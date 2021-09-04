/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-b <alopez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 14:26:38 by alopez-b          #+#    #+#             */
/*   Updated: 2021/09/04 17:33:46 by alopez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <malloc/malloc.h>

static	int	stringcount(const char *s, char c)
{
	size_t	i;
	int	count;

	i = 0;
	count = 0;
	if(!c)
		return(1);
	if (s[0] && s[0] != c)
		count++;
	while (i < ft_strlen(s) && s[i] != '\0')
	{
		//si el caracter es igual al separador y el siguiente es el final 
		if (s[i] == c && s[i + 1] == '\0')
			i++;
		//mientras el caracter es igual al separador y el siguiente tambien 
		while (s[i] == c && s[i + 1] == c)
			i++;
		//mienteas el caracter sea aigual a separador y el siguiente sea un caracter y el siguiente sea distindo a
		while(s[i] == c && s[i + 1] != c && s[i +1] != '\0')
		{
			count++;
			i++;
	//printf("Count: %d\n", count);
		}
		i++;
	}
	return (count);
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
	int		length; //long palabra
	int		position; //posicion dode empieza

	length = 0;
	position = 0;
	index = 0;
	sindex = 0;
	if(!s)
		return (NULL);
	//printf("words: %d\n", stringcount(s,c));
	array = ft_calloc(sizeof(char *), (stringcount(s,c) + 1));
	if (!array)
		return (NULL);
	while (index < stringcount(s,c))
	{
		sindex = sindex + stringposition(&s[sindex], c);
		length = stringlength(&s[sindex], c);
		array[index] = ft_substr(s, sindex, length);
		/*if (array[index] == NULL)
			free (array[index]);*/
		sindex = sindex + length;
		index++;
	}

	return (array);
}
#if DEBUG
int main()
{
	char **split;
	const char	s[]="";
	void	*ptr = malloc(sizeof(char *) * 7);
	char c;
	int i = 0;
	
	c = 'z';
	split = ft_split(s, c);
	printf("malloc size: %zu\n", malloc_size(split));
	printf("malloc size: %zu\n", malloc_size(ptr));
	while (split[i])
	{
		printf("frase %d: %s\n", i, split[i]);
		i++;
	}
	//system("leaks a.out");
	free (split);
	free (ptr);
}
#endif