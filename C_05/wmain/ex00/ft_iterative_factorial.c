/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 11:47:15 by pbeheyt           #+#    #+#             */
/*   Updated: 2022/03/20 11:46:53 by pbeheyt          ###   ########.fr       */
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

int main() {

ft_iterative_factorial(8);
  return 0;
}
