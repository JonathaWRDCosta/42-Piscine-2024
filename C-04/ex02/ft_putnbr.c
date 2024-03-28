/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 03:16:11 by jonatha           #+#    #+#             */
/*   Updated: 2024/03/28 21:22:42 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <limits.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_putnbr(int nb)
{
  if(nb == -2147483648)
  {
    write(1, "-2147483648", 11);
  }
  else if(nb >= 0 && nb <= 9)
  {
    ft_putchar(nb + '0');
  }
  else if(nb > 9)
  {
    ft_putnbr(nb / 10);
    ft_putnbr(nb % 10);
  }
  else
  {
    ft_putchar('-');
    ft_putnbr(nb * -1);
  }
}


/*
int main() {

  ft_putnbr(0);
  ft_putchar('\n');
  ft_putnbr(5);
  ft_putchar('\n');
  ft_putnbr(12345);
  ft_putchar('\n');
  ft_putnbr(-4);
  ft_putchar('\n');
  ft_putnbr(-9876);
  ft_putchar('\n');


  ft_putnbr(-1);
  ft_putchar('\n');
  ft_putnbr(1);
  ft_putchar('\n');

  ft_putnbr(2147483647);
  ft_putchar('\n');

  ft_putnbr(-2147483648);
  ft_putchar('\n');

  ft_putnbr('a');
  ft_putchar('\n');
  return (0);
}

*/