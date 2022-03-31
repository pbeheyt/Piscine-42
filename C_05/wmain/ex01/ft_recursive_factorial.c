/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 11:47:15 by pbeheyt           #+#    #+#             */
/*   Updated: 2022/03/20 11:52:01 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int        ft_recursive_factorial(int nb)
{
    int        i;

    if (nb < 0)
        return (0);
    if (nb > 1)
      nb = nb * (ft_recursive_factorial(nb-1));
    return (nb);
}

int main() {

ft_recursive_factorial(8);
  return 0;
}
