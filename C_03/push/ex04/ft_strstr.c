/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 11:47:15 by pbeheyt           #+#    #+#             */
/*   Updated: 2022/03/21 21:04:51 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	j = 0;
	while (str[j] != '\0')
	{
		i = 0;
		if (to_find[i] == str[j])
		{
			while (to_find[i] == str[j + i] || to_find[i] == '\0')
			{
				if (to_find[i] == '\0')
					return (str + j);
			i++;
			}
		
		}
	j++;
	}
	return (0);
}
