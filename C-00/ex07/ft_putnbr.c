/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 10:30:39 by jonatha           #+#    #+#             */
/*   Updated: 2024/02/24 04:26:17 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

/*
int main() {
    ft_putnbr(123);
    write(1, "\n", 1);
    ft_putnbr(-456);
    write(1, "\n", 1);
    ft_putnbr(0);
    write(1, "\n", 1);
    ft_putnbr(2147483647);  // Máximo valor de int
    write(1, "\n", 1);
    ft_putnbr(-2147483648); // Mínimo valor de int
    write(1, "\n", 1);
    ft_putnbr(987654);
    write(1, "\n", 1);
    ft_putnbr(-12345);
    write(1, "\n", 1);
    ft_putnbr(1000);
    write(1, "\n", 1);
    ft_putnbr(-999);
    write(1, "\n", 1);
    ft_putnbr(42);
    write(1, "\n", 1);
    ft_putnbr(-42);
    write(1, "\n", 1);

    return 0;
}
*/