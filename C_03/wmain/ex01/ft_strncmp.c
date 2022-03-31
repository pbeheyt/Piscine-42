/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 11:47:15 by pbeheyt           #+#    #+#             */
/*   Updated: 2022/03/16 19:08:35 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	
	i = 0;
	while(s1[i] == s2[i] && i < n)
	{
	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	i++;
	}
	return (s1[i] - s2[i]);
}

void	main(void)
{
	int	i;
	int	j;
	
	char test1[] = "okok";
	char test2[] = "okok";

	i = ft_strncmp(test1, test2, 6);
	j = strncmp(test1, test2, 6);

	printf("%d\n", i);
	printf("%d", j);	
}
