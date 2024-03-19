/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 00:35:08 by jonatha           #+#    #+#             */
/*   Updated: 2024/03/19 01:19:20 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
  {
    write(1, &str[i], 1);
    i++;
  }
}

/*
int main(void)
{
  char str[] = "Hello there :D";
  ft_putstr(str);
}
*/