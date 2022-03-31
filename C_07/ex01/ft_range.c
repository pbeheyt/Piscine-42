/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 12:05:31 by pbeheyt           #+#    #+#             */
/*   Updated: 2022/03/29 02:34:01 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

int	*ft_range(int min, int max)
{
	int		i;
	int		*tab;

	i = 0;
	if (max - min <= 0)
		return (NULL);
	tab = (int *)malloc(sizeof(int) * (max - min));
	if (tab == NULL)
		return (NULL);
	while (i < (max - min))
	{
		tab[i] = min + i;
	i++;
	}
	return (tab);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*tab;
	int	size;
	int	i;
	int	max;
	int	min;
	
	min = -20;
	max = -200;
	
	i = 0;
	tab = ft_range(min, max);
	size = max - min;
	while (i < size)
	{
		printf("%d\n", tab[i]);

	i++;
	printf("%p", ft_range(min, max));
	}
	return (0);
}*/
