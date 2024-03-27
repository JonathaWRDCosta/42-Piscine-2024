/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 20:56:27 by jonatha           #+#    #+#             */
/*   Updated: 2024/03/27 02:47:33 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

char *ft_strcat(char *dest, char *src)
{
  int i;
  int j;

  j = ft_strlen(dest);
  i = 0;
  while (src[i] != '\0')
  {
    dest[j + i] = src[i];
    i++;
  }
  dest[j + i] = '\0';
  return(dest);
}

/*
int main()
{
  char str1[20] = "Hello,";
  char str2[20] = " World!";

  printf("%s\n", ft_strcat(str1, str2));
  return(0);
}
*/