/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 03:28:23 by pbeheyt           #+#    #+#             */
/*   Updated: 2022/03/27 22:42:29 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	print(char *str, int space)
{
	ft_putstr(str);
	if (space == 1)
		write(1, " ", 1);
}

void	print1000(long nb, char **base, int grpnb)
{
	write(1, " ", 1);
	if (nb % ft_iterative_power(1000, grpnb - 1) == 0)
		print(base[27 + grpnb], 0);
	else
		print(base[27 + grpnb], 1);
}
