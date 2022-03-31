/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 11:47:15 by pbeheyt           #+#    #+#             */
/*   Updated: 2022/03/16 19:58:43 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

char *ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;	

	i = 0;
	while(dest[i] != '\0')
		i++;
	j = 0;
	while(src[j] != '\0')
	{
		dest[j + i] = src[j];
		j++;
	}
	dest[j + i] = '\0';
	return (dest);
}

void	main(void)
{
	int	i;
	int	j;
	
	char dest[30] = "okokpoto";
	char src[] = "okok";

	i = ft_strcat(dest, src);
	j = strcat(dest, src);

	printf("%s\n", dest);
	printf("%s", dest);	
}
