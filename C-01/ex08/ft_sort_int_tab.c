/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:13:54 by jonatha           #+#    #+#             */
/*   Updated: 2024/03/19 19:02:42 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
  int step, i;

  step = 0;
  while (step < size - 1)
  {
    i = 0;
    while (i < size - step - 1)
    {
      if (tab[i] > tab[i + 1])
      {
        int temp = tab[i];
        tab[i] = tab[i + 1];
        tab[i + 1] = temp;
      }
      i++;
    }
    step++;
  }
}



/*
int main(void)
{
    int tab[] = {6, 5, 4, 3, 2, 1};
    int size = sizeof(tab) / sizeof(tab[0]);

    ft_sort_int_tab(tab, size);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}
*/