/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 04:25:13 by jonatha           #+#    #+#             */
/*   Updated: 2024/03/21 21:40:25 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int ft_str_is_numeric(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
  {
    if(str[i] >= 48 && str[i] <= 57)
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
  char str1[] = "123";
  char str2[] = "Abc";
  char str3[] = "123Abc";
  char str4[] = "";

  printf("%d\n", ft_str_is_numeric(str1));
  printf("%d\n", ft_str_is_numeric(str2));
  printf("%d\n", ft_str_is_numeric(str3));
  printf("%d\n", ft_str_is_numeric(str4));
}
*/