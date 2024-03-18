/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 23:43:00 by jonatha           #+#    #+#             */
/*   Updated: 2024/03/18 00:03:56 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_numbers(void)
{
  int a;

  a = 48;
  while (a <= 57)
  {
    write(1, &a, 1);
    a++;
  }
}


/*
int main(void)
{
  ft_print_numbers();
  return(0);
}
*/