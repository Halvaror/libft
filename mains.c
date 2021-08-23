#include "libft.h"


////ISALPHA////

/*int main()
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
}*/

////ISALNUM////
/*int main()
{
  int i=0;
  char str[]="123abcd++";
  while (str[i])
  {
    printf("funcion: %d\n", isalnum(str[i]));
	printf("replica: %d\n", ft_isalnum(str[i]));
    i++;
  }
  return 0;
}*/

////ISASCII////
/*int main()
{
  int str = 175;
    printf("funcion: %d\n", isascii(str));
	printf("replica: %d\n", ft_isascii(str));
  return 0;
}*/

////ISPRINT////
/*int main()
{
  int str = 127;
    printf("funcion: %d\n", isprint(str));
	printf("replica: %d\n", ft_isprint(str));
  return 0;
}*/

////MEMSET////
/*int main()
{
  char str[]="me gustan las palomitas";
  char str2[]="me gustan las palomitas";
  
	printf("funcion: %s\n", memset(str, '$', 7));
	printf("replica: %s\n", ft_memset(str2, '$', 7));

  return 0;
}*/

////BZERO////
/*int main()
{
	int	i;
	char str[]="me gustan las palomitas";
	char str2[]="me gustan las palomitas";
  
	i = 0;
	printf("funcion: %s\n", bzero(str, 2));
	printf("replica: %s\n", ft_bzero(str2, 2));
	while(i <= 22 )
	{
		write(1, &str[i], 1);
		write(1, &str2[i], 1);
		i++;
	}

  return 0;
}*/

////MEMCPY////
/*int	main()
{
	char	str1[]="hola mundo";
	char	str2[]="hola";

	printf("%s\n", memcpy(str2, str1, 5));
	printf("%s\n", ft_memcpy(str2 , str1, 5));
}*/
/*int	main()
{
	char	str12[]="hola mundo";
	char	str22[]="genial";
	char	str11[]="hola mundo";
	char	str21[]="genial";

	printf("originl:%s\n", memcpy(&str21[4], &str11[3], 3));
	printf("originl:%s\n", str21);
	printf("funcion:%s\n", ft_memcpy(&str22[4], &str12[3], 3));
	printf("funcion:%s\n", str22);
}*/

////MEMMOVE////
/*int	main()
{
	char	str1[]="hola mundo";
	char	str2[]="hola mundo";

	printf("------ANTES------\n");
	printf("antes: %s\n", str1);
	printf("antes: %s\n", str2);
	printf("------FUNCION------\n");
	printf("función: %s\n", ft_memmove(&str1[4] , str1, 10));
	/*printf("orignal: %s\n", memmove(&str1[4], str1, 7));
	/*printf("------DESPUES------\n");
	printf("después: %s\n", str1);
	printf("después: %s\n", str2);
}*/

////TOUPPER////

/*int main()
{
  int i=0;
  char str1[]="123abcd++";
  char str2[]="123abcd++";
  while (str1[i])
  {
    str1[i] = toupper(str1[i]);
    i++;
  }
  i = 0;
  while (str2[i])
  {
    str2[i] = ft_toupper(str2[i]);
    i++;
  }
  printf("origianl: %s\n", str1);
  printf("replica: %s\n", str2);
  return 0;
}*/

////STRNSTR////

/*int main()
{
	char big[]="hola que tal mundo";
	char little[]="a";

	printf("original: %s\n", strstr(big, little));
	printf("funcion : %s\n", ft_strnstr(big, little, 2));
}*/

////STRDUP////

/*int main()
{
	const char s1[]="hola mundo";
	size_t	i;

	i = ft_strlen(s1);
	printf("original: %s \n", strdup(s1));
	printf("original: %s \n", ft_strdup(s1));
}*/

////SUBSTR////
/*int	main()
{
	const char s1[]="hola";

	printf("funcion: %s\n", ft_substr(s1, 7, 4));
}*/