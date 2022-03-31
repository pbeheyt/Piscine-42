/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 11:47:15 by pbeheyt           #+#    #+#             */
/*   Updated: 2022/03/24 18:34:47 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i * i < nb && i < 46340)
		i++;
	return (i);
}

int	ft_is_prime(int nb, int sqrt)
{
	int	div;

	div = 2;
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	while (div <= sqrt)
	{
		if (nb % div == 0)
			return (0);
	div++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;
	int	sqrt;

	i = nb;
	sqrt = ft_sqrt(nb);
	if (nb < 3)
		return (2);
	if (nb % 2 == 0)
		i++;
	while (ft_is_prime(i, sqrt) == 0)
		i = i + 2;
	return (i);
}
/*
#include<stdio.h>

int	main(void)
{
	printf("%d", ft_find_next_prime(2147000000));
	return (0);
}*/
