/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 09:38:50 by jonatha           #+#    #+#             */
/*   Updated: 2024/03/21 21:40:25 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
  unsigned int i;
  
  i = 0;
  while (i < size -1 && src[i] != '\0')
  {
    dest[i] = src[i];
    i++;
  }
  dest[i] = '\0';
  return(i);
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
  char *src = "World!";
  char dest[ft_strlen(src)];
  //int size_of = ft_strlen(src);

  unsigned int strlcpy = ft_strlcpy(dest, src, size_of);

  printf("%u", strlcpy);
}
*/