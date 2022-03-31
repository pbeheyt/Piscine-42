/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 11:34:40 by pbeheyt           #+#    #+#             */
/*   Updated: 2022/03/29 02:18:40 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	check_base(char *base)
{
	int	i;
	int	j;
	int	l;

	l = ft_strlen(base);
	if (l <= 1)
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
		j++;
		}
	i++;
	}
	return (l);
}

long	get_value(char *str, char *base, int pos)
{
	int		j;
	int		i;
	long	nblong;	

	i = pos;
	j = 0;
	nblong = 0;
	while (base[j] != '\0')
	{
		if (str[i] == base[j])
		{
			nblong = nblong * ft_strlen(base) + j;
			j = 0;
			i++;
		}
		else
			j++;
	}
	return (nblong);
}

int	ft_atoi_base(char *str, char *base)
{
	long	nblong;
	int		sign;
	int		i;

	if (check_base(base) == 0)
		return (0);
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	sign = 1;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	nblong = get_value(str, base, i);
	return (nblong * sign);
}
