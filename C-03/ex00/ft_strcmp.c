/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 02:25:46 by jonatha           #+#    #+#             */
/*   Updated: 2024/03/22 20:43:05 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
  int i;

  i = 0;
  while (s1[i] != '\0' && s1[i] == s2[i])
  {
    i++;
  }
  return(s1[i] - s2[i]);
}


/*
int main()
{
  char src1[] = "Hello thsere";
  char src2[] = "Hello there";

  printf("%d", ft_strcmp(src1, src2));
}
*/