/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 20:20:14 by jonatha           #+#    #+#             */
/*   Updated: 2024/03/23 20:35:08 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

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

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
  unsigned i;
  int j;

  i = 0;
  j = ft_strlen(dest);
  while (i < nb && src[i] != '\0')
  {
    dest[j + i] = src[i];
    i++;
  }
  dest[j + i] = '\0';
  return(dest);
}

/*
int main() {
  char dest1[20] = "Hello, ";
  char dest2[20] = "Hello, ";
  char src[20] = "there :D";

  printf("%s\n", strncat(dest1, src, 8));
  printf("%s\n", ft_strncat(dest2, src, 8));

  return 0;
}
*/