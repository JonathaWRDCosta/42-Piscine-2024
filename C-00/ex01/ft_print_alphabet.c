/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 23:36:01 by jonatha           #+#    #+#             */
/*   Updated: 2024/03/17 23:40:23 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void)
{
  int a;

  a = 97;
  while (a <= 122)
  {
    write(1, &a, 1);
    a++;
  }
}

/*
int main(void)
{
  ft_print_alphabet();
  return(0);
}
*/