/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 12:05:31 by pbeheyt           #+#    #+#             */
/*   Updated: 2022/03/29 21:24:41 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_strslen(int size, char **strs, char *sep)
{
	int	l;
	int	len_sep;
	int	len_strs;

	l = 0;
	len_sep = ft_strlen(sep);
	len_strs = 0;
	while (l < size)
	{
		len_strs = len_strs + ft_strlen(strs[l]);
		l++;
	}
	return (len_strs + len_sep * (size - 1));
}

char	*fill_str(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		l;
	char	*str;

	str = (char *)malloc(sizeof(char) * (ft_strslen(size, strs, sep) + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	l = 0;
	while (l < size)
	{
		j = 0;
		while (strs[l][j] != '\0')
			str[i++] = strs[l][j++];
		j = 0;
		if (l != size - 1)
		{
			while (sep[j] != '\0')
				str[i++] = sep[j++];
		}
		str[i] = '\0';
	l++;
	}
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;

	if (size == 0)
	{
		str = (char *)malloc(sizeof(char));
		*str = '\0';
		return (str);
	}
	str = fill_str(size, strs, sep);
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*tab[7];
	char	*sep;
	int	size;
	
	tab[0] = "Salut";
	tab[1] = "ca";
	tab[2] = "va";
	tab[3] = "bogoss";
	tab[4] = "ok";
	tab[5] = "let's";
	tab[6] = "goo";
	
	sep = "-/-";
	size = 7;	
	
	printf("%s", ft_strjoin(size, tab, sep));

	//printf("%d", ft_strslen(3, tab, sep));
	return (0);
}*/
