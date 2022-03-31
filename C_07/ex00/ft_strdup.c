/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 12:05:31 by pbeheyt           #+#    #+#             */
/*   Updated: 2022/03/28 14:51:07 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

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
/*
#include <stdio.h>

int	main(void)
{
	char 	*str;

	str = ft_strdup("Hello\n");
	free(str);
	str = NULL;
	if (str == NULL)
		printf("c null");
	printf("%s", ft_strdup(""));
	return (0);
}*/
