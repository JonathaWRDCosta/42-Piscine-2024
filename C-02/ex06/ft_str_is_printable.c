/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 04:38:49 by jonatha           #+#    #+#             */
/*   Updated: 2024/03/21 21:40:25 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int ft_str_is_printable(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
  {
    if (str[i] >= 32 && str[i] <= 127)
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
  char str2[] = "\n\0\t";
  char str3[] = "abc\n";
  char str4[] = "";

  printf("%d\n", ft_str_is_printable(str1));
  printf("%d\n", ft_str_is_printable(str2));
  printf("%d\n", ft_str_is_printable(str3));
  printf("%d\n", ft_str_is_printable(str4));
}
*/