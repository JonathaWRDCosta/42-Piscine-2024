/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 03:45:49 by jonatha           #+#    #+#             */
/*   Updated: 2024/03/29 04:38:29 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isspace(char c)
{
  return (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r');
}

int ft_issign(char c)
{
  return (c == '-' || c == '+');
}

int ft_isnumber(char c)
{
  return (c >= '0' && c <= '9');
}

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	number;

	i = 0;
	number = 0;
	j = 0;
	while (ft_isspace(str[i]))
  {
		i++;
  }
	while (ft_issign(str[i]))
	{
		if (str[i++] == '-')
    {
			j = !j;
    }
	}
	while (ft_isnumber(str[i]) && str[i] != '\0')
  {
		number = 10 * number + str[i++] - '0';
  }
	if (j)
  {
		return (-number);
  }
	return (number);
}

/*
int main()
{
  char str[50] = " ---+--+1234ab567";
  printf("%d", ft_atoi(str));
}
*/