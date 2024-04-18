/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 05:23:13 by jonatha           #+#    #+#             */
/*   Updated: 2024/04/09 14:02:45 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
  write(1, &c, 1);
}

int main(int argc, char *argv[])
{
    int i;

    i = 0;
    if (argc > 0)
    {
        while (argv[0][i] != '\0')
        {
            ft_putchar(argv[0][i]);
            i++;
        }
        write(1, "\n", 1);
    }
}