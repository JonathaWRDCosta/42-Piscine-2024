/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 04:02:39 by jonatha           #+#    #+#             */
/*   Updated: 2024/03/21 21:40:25 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int ft_str_is_alpha(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
  {
    if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
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
  char str1[] = "Hello";
  char str2[] = "ABC123";
  char str3[] = "123";
  char str4[] = "";

  printf("%d\n", ft_str_is_alpha(str1));
  printf("%d\n", ft_str_is_alpha(str2));
  printf("%d\n", ft_str_is_alpha(str3));
  printf("%d\n", ft_str_is_alpha(str4));
}
*/