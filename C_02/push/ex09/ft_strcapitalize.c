/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 11:47:15 by pbeheyt           #+#    #+#             */
/*   Updated: 2022/03/15 15:43:24 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_other(char c)
{
	if (c < 48 || (c > 57 && c < 65) || (c > 90 && c < 97) || c > 122)
		return (1);
	else
		return (0);
}

int	is_alpha_min(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	else
		return (0);
}

int	is_alpha_cap(char c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		tmp;
	char	c;

	i = 0;
	tmp = 1;
	c = str[i];
	while (str[i] != '\0')
	{
		c = str[i];
		if ((tmp == 1) && is_alpha_min(c))
			str[i] = str[i] - 32;
		if ((tmp == 0) && is_alpha_cap(c))
			str[i] = str[i] + 32;
		if (is_other(c))
			tmp = 1;
		else
			tmp = 0;
		i++;
	}
	return (str);
}
