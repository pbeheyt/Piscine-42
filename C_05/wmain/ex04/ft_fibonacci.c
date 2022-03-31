/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 11:47:15 by pbeheyt           #+#    #+#             */
/*   Updated: 2022/03/20 11:54:23 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int    ft_fibonacci(int index)
{
    int resultat;
    if (index < 0)
        return (-1);
    if (index == 0)
        return (0);
    if (index < 3)
        resultat = 1;
    else
        resultat = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
    return (resultat);
}

int main() {

ft_fibonacci(8);
  return 0;
}
