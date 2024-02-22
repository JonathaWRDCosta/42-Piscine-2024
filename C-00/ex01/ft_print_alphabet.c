/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 05:06:18 by jonatha           #+#    #+#             */
/*   Updated: 2024/02/22 05:11:33 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void)
{
  int i;

  i = 97;
  while(i <= 122)
  {
    write(1, &i, 1);
    i++;
  }
}

int main()
{
  ft_print_alphabet();
  return(0);
}