/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 11:34:40 by pbeheyt           #+#    #+#             */
/*   Updated: 2022/03/20 11:35:29 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include <stdlib.h>

int        ft_atoi(char *str)
{
    long    ret;
    int        sign;

    sign = 1;
    ret = 0;
    while (*str == 32 || (*str >= 9  && *str <= 13))
        str++;
    while (*str == '+' || *str == '-')
    {
      if (*str == '-') 
        sign = -sign;
        str++;
    }
    while (*str >= '0' && *str <= '9')
    {
        ret = ret * 10 + *str - '0';
        str++;
    }
    return (ret * sign);
}

void  main(void)
{
  int i;
  int j;
  
  char str[19] = "  ++--+-1234ut ca va";
  char tofind[] = "Salua";
  
  i = ft_atoi(str);
  j = atoi(str);
}
