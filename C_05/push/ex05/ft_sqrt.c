/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 11:47:15 by pbeheyt           #+#    #+#             */
/*   Updated: 2022/03/24 02:51:22 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	res;

	i = 0;
	while (i * i < nb && i < 46340)
		i++;
	if (i * i == nb)
		res = i;
	else
		res = 0;
	return (res);
}
/*
#include<stdio.h>

int	main(void) 
{
	printf("%d", ft_sqrt(2147395600));
	return (0);
}*/