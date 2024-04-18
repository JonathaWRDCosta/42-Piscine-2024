/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 02:59:03 by jonatha           #+#    #+#             */
/*   Updated: 2024/03/31 03:42:59 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
  {
    write(1, &str[i], 1);
    i++;
  }
  str[i] = '\0';
}

int main(int argc, char *argv[])
{
  int i;
  
  i = 1;
  while (i < argc)
  {
    ft_putstr(argv[i++]);
    write(1, "\n", 1);
  }
  return 0;
}
