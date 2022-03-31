/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 11:47:15 by pbeheyt           #+#    #+#             */
/*   Updated: 2022/03/21 14:25:14 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;
	
	i = 0;
	while(s1[i] == s2[i])
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
		
	char test1[] = "cc ca va";
	char test2[] = "oui et toi";

	i = ft_strcmp(test1, test2);
	j = strcmp(test1, test2);	
}
