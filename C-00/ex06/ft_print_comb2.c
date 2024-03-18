/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 11:24:58 by jonatha           #+#    #+#             */
/*   Updated: 2024/03/18 15:25:16 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_print_comb2(void)
{
  int a;
  int b;

  a = 0;
  while (a <= 98)
  {
    b = a + 1;
    while (b <= 99)
    {
      ft_putchar(a / 10 + '0');
      ft_putchar(a % 10 + '0');
      ft_putchar(' ');
      ft_putchar(b / 10 + '0');
      ft_putchar(b % 10 + '0');
      if (a != 98 || b != 99)
      {
        ft_putchar(',');
        ft_putchar(' ');
      }
      b++;
    }
    a++;
  }
  
}

/*
int main(void)
{
  ft_print_comb2();
  return(0);
}
*/