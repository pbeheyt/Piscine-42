/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 11:47:15 by pbeheyt           #+#    #+#             */
/*   Updated: 2022/03/12 13:44:42 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < (size / 2))
	{
	tmp = tab[i];
	tab[i] = tab[size - i - 1];
	tab[size - i -1] = tmp;
	i++;
	}
}

void main (void)
{
	int tab[8] = {1,2,3,4,5,6,7,8};
	
	ft_rev_int_tab(tab, 8);
}
