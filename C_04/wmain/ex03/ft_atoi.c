/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 11:34:40 by pbeheyt           #+#    #+#             */
/*   Updated: 2022/03/22 17:13:02 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int     ft_atoi(char *str)
{
        long    nblong;
        int             sign;
        int             i;

        i = 0;
        sign = 1;
        nblong = 0;
        while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
                i++;
        while (str[i] == '+' || str[i] == '-')
        {
                if (str[i] == '-')
                sign = -sign;
                i++;
        }
        while (str[i] >= '0' && str[i] <= '9')
        {
                nblong = nblong * 10 + str[i] - '0';
                i++;
        }
        return (nblong * sign);
}


void  main(void)
{
  int i;
  int j;
  
  char str[] = "  ++--+-1234ut ca va";
  
  i = ft_atoi(str);
//  j = atoi(str);

	printf("%d",i);
}
