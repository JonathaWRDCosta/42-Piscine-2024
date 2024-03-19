/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 00:30:02 by jonatha           #+#    #+#             */
/*   Updated: 2024/03/19 18:35:31 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
  int tmp;
  tmp = *a;
  *a = *a / *b;
  *b = tmp % *b;
}

/*
int main(void)
{
  int a;
  int b;

  a = 21;
  b = 42;
  ft_ultimate_div_mod(&a, &b);
  printf("%d\n", a);
  printf("%d\n", b);
}
*/