/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 03:31:37 by pbeheyt           #+#    #+#             */
/*   Updated: 2022/03/27 22:42:05 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

long int	ft_atoi(char *str)
{
	long int	nb;
	int			i;

	i = 0;
	nb = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		return (-1);
	else if (str[i] == '+')
		i++;
	if (str[i] < '0' || str[i] > '9')
		return (-1);
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	if (nb < 0 || nb > 4294967295)
		return (-1);
	return (nb);
}

int	group_nb(long int nb)
{
	int	i;

	i = 1;
	while (nb > 999)
	{
		nb = nb / 1000;
		i++;
	}
	return (i);
}

long int	ft_iterative_power(long int nb, int power)
{
	int			i;
	long int	res;

	if (power < 0)
		return (0);
	i = 0;
	res = 1;
	while (i < power)
	{
		res = res * nb;
	i++;
	}
	return (res);
}

void	convert_999(long int nb, char **base, int totalgrpnb)
{
	if (nb == 0 && totalgrpnb == 1)
		print(base[nb], 0);
	if (nb == 0)
		return ;
	if (nb >= 100)
	{
		print(base[nb / 100], 1);
		if (nb % 100 == 0)
			print(base[28], 0);
		else
			print(base[28], 1);
		nb = nb % 100;
	}
	if (nb > 20)
	{
		if (nb % 10 == 0)
			print(base[nb / 10 + 18], 0);
		else
			print(base[nb / 10 + 18], 1);
		nb = nb % 10;
	}
	if (nb <= 20 && nb >= 1)
		print(base[nb], 0);
}

void	convert_all(long int nb, char **base)
{
	int			grpnb;
	int			totalgrpnb;
	long int	nb999;

	grpnb = group_nb(nb);
	totalgrpnb = grpnb;
	while (grpnb > 0)
	{
		if (nb < ft_iterative_power(1000, grpnb - 1))
			nb999 = 0;
		else
			nb999 = nb;
		if (nb > 999)
		{
			nb999 = nb / ft_iterative_power(1000, grpnb - 1);
			nb = nb % ft_iterative_power(1000, grpnb - 1);
		}	
		convert_999(nb999, base, totalgrpnb);
		if (grpnb > 1 && nb999 != 0)
			print1000(nb, base, grpnb);
		grpnb--;
	}
}
