/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 20:07:57 by jonatha           #+#    #+#             */
/*   Updated: 2024/03/19 18:49:02 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
  *div = a / b;
  *mod = a % b;
}

/*
int main(void)
{  
  int a;
  int b;
  int div;
  int mod;

  a = 21;
  b = 42;

  ft_div_mod(a, b, &div, &mod);
  printf("%d\n", div);
  printf("%d\n", mod);
}
*/