/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 11:34:40 by pbeheyt           #+#    #+#             */
/*   Updated: 2022/03/30 00:24:24 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str);
int		check_base(char *base);
long	get_value(char *str, char *base, int pos);
int		ft_atoi_base(char *str, char *base);

void	ft_rev_int_tab(char *tab, int size, int sign)
{
	int		i;
	char	tmp;

	i = 0;
	if (sign == 1)
	{
		while (i < (size / 2))
		{
			tmp = tab[i];
			tab[i] = tab[size - i - 1];
			tab[size - i++ - 1] = tmp;
		}
	}
	else if (sign == -1)
	{
		while (i <= (size / 2))
		{
			tmp = tab[i];
			tab[i] = tab[size - i];
			tab[size - i++] = tmp;
		}
	tab[0] = tab[size];
	tab[size] = '\0';
	}
}

int	ft_putnbr_base(int nbr, char *base, char *str, int pos)
{
	int		len;
	long	nblong;
	int		j;
	int		sign;

	j = pos;
	nblong = nbr;
	len = ft_strlen(base);
	sign = 1;
	if (nblong < 0)
	{
		str[j] = '-';
		nblong = -nblong;
		sign = -sign;
		j++;
	}
	if (nblong >= len)
		ft_putnbr_base(nblong / len, base, str, j + 1);
	str[j] = base[nblong % len];
	return (sign);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		res;
	char	*str;
	int		sign;

	if (check_base(base_from) == 0 || check_base(base_to) == 0)
		return (NULL);
	res = ft_atoi_base(nbr, base_from);
	str = (char *)malloc(sizeof(char) * 32);
	str[0] = '\0';
	sign = ft_putnbr_base(res, base_to, str, 0);
	ft_rev_int_tab(str, ft_strlen(str), sign);
	return (str);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		char base_to[] = "0123456789abcdef";
		char base_from[] = "0123456789";

		printf("%s", ft_convert_base(argv[1], base_from, base_to));
	}
	return (0);
}*/
