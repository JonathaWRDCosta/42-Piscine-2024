/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 04:35:20 by jonatha           #+#    #+#             */
/*   Updated: 2024/03/21 21:40:25 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int ft_str_is_uppercase(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
  {
    if(str[i] >= 65 && str[i] <= 90)
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
  char str1[] = "ABC";
  char str2[] = "A1B2C";
  char str3[] = "ABCas";
  char str4[] = "";

  printf("%d\n", ft_str_is_uppercase(str1));
  printf("%d\n", ft_str_is_uppercase(str2));
  printf("%d\n", ft_str_is_uppercase(str3));
  printf("%d\n", ft_str_is_uppercase(str4));
}
*/