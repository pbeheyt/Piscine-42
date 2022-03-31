/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 11:47:15 by pbeheyt           #+#    #+#             */
/*   Updated: 2022/03/24 02:26:21 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int        ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i * i < nb && i < 46340)
		i++;
	return (i);

}

int        ft_is_prime(int nb)
{
	int	div;
	int	sqrt;

	div = 2;
	sqrt = ft_sqrt(nb);
	if (nb < 2)
		return (0);
	while (div <= sqrt)
	{
		if(nb % div == 0)
			return (0);
	div++;
	}
	return(1);
}

#include <stdio.h>

int main() {
 
printf("%d",ft_is_prime(2147000040));
  return 0;
}
