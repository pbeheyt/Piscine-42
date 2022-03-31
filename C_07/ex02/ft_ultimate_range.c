/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 12:05:31 by pbeheyt           #+#    #+#             */
/*   Updated: 2022/03/28 18:18:42 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		i;

	i = 0;
	if (max - min <= 0)
	{
		range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * (max - min));
	if (range == NULL)
		return (-1);
	while (i < (max - min))
	{
		range[0][i] = min + i;
	i++;
	}
	return (max - min);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*tab[1];
	int	size;
	int	i;
	int	max;
	int	min;
	
	min = 1;
	max = -100;
	
	i = 0;
	ft_ultimate_range(tab, min, max);
	size = max - min;
	while (i < size)
	{
		printf("%d\n", tab[0][i]);
	i++;
	}
	printf("%d", ft_ultimate_range(tab, min, max));
	return (0);
}*/
