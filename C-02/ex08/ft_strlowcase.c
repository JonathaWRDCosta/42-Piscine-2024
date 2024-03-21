/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 05:07:04 by jonatha           #+#    #+#             */
/*   Updated: 2024/03/21 21:40:25 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char *ft_strlowcase(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
  {
    if (str[i] >= 65 && str[i] <= 90)
    {
      str[i] = str[i] + 32;
    }
    i++;
  }
  return(str);
}

/*
int main()
{
  char str1[] = "Hello 42";
  char str2[] = "Oi 42";
  char str3[] = "Hallo 42";
  char str4[] = "&/()/$##";

  printf("%s\n", ft_strlowcase(str1));
  printf("%s\n", ft_strlowcase(str2));
  printf("%s\n", ft_strlowcase(str3));
  printf("%s\n", ft_strlowcase(str4));
}
*/