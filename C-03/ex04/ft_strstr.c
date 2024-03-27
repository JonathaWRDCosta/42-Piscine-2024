/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 20:35:40 by jonatha           #+#    #+#             */
/*   Updated: 2024/03/23 21:08:14 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
  int i;
  int j;

  i = 0;
  j = 0;
  if (to_find[0] == '\0')
  {
    return (str);
  }
  while (str[i] != '\0')
  {
    if(str[i] == to_find[0])
    {
      while (to_find[j] != '\0' && str[i + j] == to_find[j])
      {
        j++;
      }
      if (to_find[j] == '\0')
      {
        return(&str[i]);
      }
      
    }
    i++;
  }
  return(NULL);
}

/*
int main() {
    char str[] = "Hello, world!";
    char to_find1[] = "world";
    char to_find2[] = "Hello";
    char to_find3[] = "!";
    char to_find4[] = "not found";
    char to_find5[] = "";

    char *result;

    // Testando a busca de "world"
    result = ft_strstr(str, to_find1);
    if (result) {
        printf("'%s' found in '%s': %s\n", to_find1, str, result);
    } else {
        printf("'%s' not found in '%s'\n", to_find1, str);
    }

    // Testando a busca de "Hello"
    result = ft_strstr(str, to_find2);
    if (result) {
        printf("'%s' found in '%s': %s\n", to_find2, str, result);
    } else {
        printf("'%s' not found in '%s'\n", to_find2, str);
    }

    // Testando a busca de "!"
    result = ft_strstr(str, to_find3);
    if (result) {
        printf("'%s' found in '%s': %s\n", to_find3, str, result);
    } else {
        printf("'%s' not found in '%s'\n", to_find3, str);
    }

    // Testando a busca de "not found"
    result = ft_strstr(str, to_find4);
    if (result) {
        printf("'%s' found in '%s': %s\n", to_find4, str, result);
    } else {
        printf("'%s' not found in '%s'\n", to_find4, str);
    }

    // Testando a busca de uma string vazia ""
    result = ft_strstr(str, to_find5);
    if (result) {
        printf("Empty string '' found in '%s': %s\n", str, result);
    } else {
        printf("Empty string '' not found in '%s'\n", str);
    }

    return 0;
}

*/