/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 19:37:16 by jonatha           #+#    #+#             */
/*   Updated: 2024/03/21 22:14:47 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//include <stdio.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_print_hex(unsigned char c)
{
    char *hex = "0123456789abcdef";
    ft_putchar('\\');
    ft_putchar(hex[c / 16]);
    ft_putchar(hex[c % 16]);
}

void ft_putstr_non_printable(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
  {
    if (str[i] < 32 ||str[i] > 126)
    {
      ft_print_hex(str[i]);
    }
    else
    {
      ft_putchar(str[i]);
    }
    i++;
  }
}

/*
int main()
{
  char string[] = "This is an example string\twith a tab and \x0Anewline character.";

  printf("Testing with ft_putstr_non_printable:\n");  // We can keep printf here for this message

  printf("Original string: \"%s\"\n", string);
  ft_putstr_non_printable(string);

  return 0;
}
*/