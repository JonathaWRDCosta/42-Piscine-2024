/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 19:56:34 by jonatha           #+#    #+#             */
/*   Updated: 2024/03/19 18:47:53 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_swap(int *a, int *b)
{
  int i;

  i = *a;
  *a = *b;
  *b = i;
}

/*
int main(void)
{
  int a;
  int b;

  a = 21;
  b = 42;

  printf("--- Before call the funcion ---\n");
  printf("A: %d || B: %d\n", a, b);
  ft_swap(&a, &b);
  printf("--- After call the funcion ---\n");
  printf("A: %d || B: %d\n", a, b);
}
*/