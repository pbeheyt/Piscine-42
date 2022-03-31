/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 11:47:15 by pbeheyt           #+#    #+#             */
/*   Updated: 2022/03/20 11:53:28 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int        ft_recursive_power(int nb, int power)
{
    int        i;

    if (nb < 0)
        return (0);
    if (power > 1)
      nb = nb * (ft_recursive_power(nb, power -1));
    return (nb);
}

int main() {

ft_recursive_power(4,4);
  return 0;
}
