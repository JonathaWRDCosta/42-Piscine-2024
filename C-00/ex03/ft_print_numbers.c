/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 05:17:48 by jonatha           #+#    #+#             */
/*   Updated: 2024/02/22 05:20:11 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_print_numbers(void)
{
  int i;

  i = 48;
  while (i <= 57)
  {
    write(1, &i, 1);
    i++;
  } 
}

/*
int main(void)
{
  ft_print_numbers();
  return(0);
}
*/