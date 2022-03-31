/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 11:47:15 by pbeheyt           #+#    #+#             */
/*   Updated: 2022/03/23 14:21:45 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}


int	check_base(char * base)
{
	int	i;
	int 	j;
	int	len;
	
	len = ft_strlen(base);	
	if (len <= 1)
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base [i] == '-')
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
	return(len);
}


void	ft_putnbr_base(int nbr, char * base)
{
	char	c;
	int	len;
	long	nblong;

	nblong = nbr;
	len = ft_strlen(base);
	if (check_base(base) == 0)
		return;
	if (nblong < 0)
	{		
		write(1, "-", 1);
		nblong = -nblong;
	}
	if (nblong >= len)
		ft_putnbr_base(nblong / len, base);
	c = base[nblong % len];
	write(1, &c, 1);
}

#include <limits.h>
void	main(void)
{
	char	* base;
	
	base = "0123456789abcdef";

	//printf("%d", check_base(base));

	ft_putnbr_base(46, base);
}
