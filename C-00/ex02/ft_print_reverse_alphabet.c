/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 23:40:41 by jonatha           #+#    #+#             */
/*   Updated: 2024/03/17 23:42:46 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
  int a;

  a = 122;
  while (a >= 97)
  {
    write(1, &a, 1);
    a--;
  }
}

/*
int main(void)
{
  ft_print_reverse_alphabet();
  return(0);
}
*/