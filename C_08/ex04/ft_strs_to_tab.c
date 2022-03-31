/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 11:47:15 by pbeheyt           #+#    #+#             */
/*   Updated: 2022/03/30 22:15:01 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dup;

	i = 0;
	while (src[i] != '\0')
		i++;
	dup = (char *)malloc(sizeof(char) * (i + 1));
	if (dup == NULL)
		return (NULL);
	dup[i] = '\0';
	i--;
	while (i >= 0)
	{
		dup[i] = src[i];
	i--;
	}
	return (dup);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*element;
	int					i;

	i = 0;
	element = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (element == NULL)
		return (NULL);
	while (i < ac)
	{
		element[i].size = ft_strlen(av[i]);
		element[i].str = av[i];
		element[i].copy = ft_strdup(av[i]);
	i++;
	}
	element[i].str = 0;
	return (element);
}
