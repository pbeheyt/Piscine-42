/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 12:05:31 by pbeheyt           #+#    #+#             */
/*   Updated: 2022/03/30 00:24:48 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

int	char_set(char *charset, char c)
{
	int		i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (char_set(charset, str[i]) == 0
			&& char_set(charset, str[i + 1]) == 1)
			words++;
	i++;
	}
	return (words);
}	

void	fill_tab(char **tab, char *str, char *charset, int words)
{
	int		i;
	int		j;
	int		k;
	int		l;

	i = 0;
	k = 0;
	l = 0;
	while (l < words)
	{
		while (char_set(charset, str[i]) == 1)
			i++;
		j = 0;
		while (char_set(charset, str[j + i]) == 0)
			j++;
		tab[l] = (char *)malloc(sizeof(char) * (j + 1));
		k = 0;
		while (k < j)
			tab[l][k++] = str[i++];
		tab[l][k] = '\0';
	l++;
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		words;

	words = count_words(str, charset);
	tab = (char **)malloc(sizeof(char *) * (words + 1));
	if (tab == NULL)
		return (NULL);
	tab[words] = 0;
	fill_tab(tab, str, charset, words);
	return (tab);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*str;
	char	*charset;
	int		i;
	char	**tab;

	charset = "fgfg";
	str = "";
	

	tab = ft_split(str,charset);
	i = 0;
	while (tab[i] != 0)
	{
		printf("%s\n", tab[i]);
		i++;
	}
	//printf("%d", count_words(str, charset));
	return (0);
}*/
