/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 23:45:58 by jonatha           #+#    #+#             */
/*   Updated: 2024/03/18 00:02:33 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_is_negative(int n)
{
  if (n < 0)
  {
    write(1, "N", 1);
  }
  else
  {
    write(1, "P", 1);
  }
}

/*
int main(void)
{
  ft_is_negative(1);
  write(1, "\n", 1);
  ft_is_negative(-42);
  write(1, "\n", 1);
  ft_is_negative(42);
  write(1, "\n", 1);
  ft_is_negative(99);
  write(1, "\n", 1);
  ft_is_negative(0);
  write(1, "\n", 1);
  return(0);
}
*/