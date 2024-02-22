/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 05:12:02 by jonatha           #+#    #+#             */
/*   Updated: 2024/02/22 05:17:28 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
  int i;
  
  i = 122;
  while (i >= 97)
  {
    write(1, &i, 1);
    i--;
  }
}

/*
int main(void)
{
  ft_print_reverse_alphabet();
  return(0);
}
*/