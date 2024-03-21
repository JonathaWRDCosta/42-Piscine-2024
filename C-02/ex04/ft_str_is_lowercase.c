/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 04:30:49 by jonatha           #+#    #+#             */
/*   Updated: 2024/03/21 21:40:25 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
  {
    if (str[i] >= 97 && str[i] <= 122)
    {
      i++;
    }
    else
    {
      return(0);
    }
  }
  return(1);
}

/*
int main()
{
  char str1[] = "abc";
  char str2[] = "a2b2c";
  char str3[] = "abAc";
  char str4[] = "";

  printf("%d\n", ft_str_is_lowercase(str1));
  printf("%d\n", ft_str_is_lowercase(str2));
  printf("%d\n", ft_str_is_lowercase(str3));
  printf("%d\n", ft_str_is_lowercase(str4));
}
*/