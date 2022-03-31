/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 11:47:15 by pbeheyt           #+#    #+#             */
/*   Updated: 2022/03/23 21:34:29 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int        ft_iterative_factorial(int nb)
{
    int        i;
    int        fact;

    if (nb < 0)
        return (0);
    fact = 1;
    i = 1;
    while (i <= nb)
    {
    fact = fact * i;
        i++;
    }
    return (fact);
}

#include <stdio.h>

int main(void) 
{

printf("%d",ft_iterative_factorial(10));
  return (0);
}
