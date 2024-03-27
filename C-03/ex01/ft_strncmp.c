/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 03:21:06 by jonatha           #+#    #+#             */
/*   Updated: 2024/03/22 20:55:24 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
  unsigned int i;

  i = 0;
  while (i < n && s1[i] != '\0' && s1[i] == s2[i])
  {
    i++;
  }
  if (i == n)
  {
    return(0);
  }
  return((unsigned char)s1[i] - (unsigned char)s2[i]);
}


/*
int main()
{
  char src1[] = "Hello :D";
  char src2[] = "Hell :D";

  printf("%d", ft_strncmp(src1, src2, 10));
  return 0;
}
*/