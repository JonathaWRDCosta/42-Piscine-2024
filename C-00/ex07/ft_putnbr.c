/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 11:56:51 by jonatha           #+#    #+#             */
/*   Updated: 2024/03/18 12:44:54 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_putnbr(int nb)
{
  if(nb == -2147483648)
  {
    write(1, "-2147483648", 11);
    return;
  }
  
  if (nb >= 0 && nb <= 9)
  {
    ft_putchar(nb + '0');
  }
  else if(nb > 9)
  {
    ft_putnbr(nb / 10);
    ft_putnbr(nb % 10);
  }
  else if(nb < 0)
  {
    ft_putchar('-');
    ft_putnbr(nb * -1);
  }
}

/*
int main(void)
{
  ft_putnbr(42);
  ft_putchar('\n');
}
*/