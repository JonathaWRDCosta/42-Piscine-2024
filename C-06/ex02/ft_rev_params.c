/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 05:12:03 by jonatha           #+#    #+#             */
/*   Updated: 2024/03/31 06:07:09 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

int main(int argc, char *argv[])
{
  int i;
  int j;

  i = argc - 1;
  while (i > 0)
  {
    j = 0;
    while (argv[i][j] != '\0')
    {
      ft_putchar(argv[i][j]);
      j++;
    }
    i--;
    ft_putchar('\n');
  }
  return(0);
}