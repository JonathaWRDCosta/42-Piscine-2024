/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 02:33:07 by jonatha           #+#    #+#             */
/*   Updated: 2024/03/21 21:53:07 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char *ft_strncpy(char *dest, char *src, int n)
{
  int i;

  i = 0;
  while (i < n)
  {
    if (src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }
    else
    {
      dest[i] = '\0';
      i++;
    } 
  }
  return (dest);
}

int ft_strlen(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
  {
    i++;
  }
  return (i);
}


/*

int main()
{
	char src[] = "Hello";
	char dest[] = "World1";
  int n = 3;

  ft_strncpy(dest, src, n);
  printf("--Teste--\n");
  printf("str1: %s\n", src);
  printf("str2: %s\n", dest);
  // printf("str3: %s\n", str3);

  char str1[] = "42 here I go";
  char str2[ft_strlen(str1) + 1];
  char str3[ft_strlen(str1) + 1];

  printf("--Before call the function--\n");
  printf("str1: %s\n", str1);
  printf("str2: %s\n", str2);
  printf("str3: %s\n", str3);

  ft_strncpy(str2, str1, ft_strlen(str1));
  printf("--After call the function full size str1 to str2--\n");
  printf("str1: %s\n", str1);
  printf("str2: %s\n", str2);
  printf("str3: %s\n", str3);
  
  ft_strncpy(str3, str2, 7);
  printf("--After call the function limited size str2 to str3--\n");
  printf("str1: %s\n", str1);
  printf("str2: %s\n", str2);
  printf("str3: %s\n", str3);
}*/
