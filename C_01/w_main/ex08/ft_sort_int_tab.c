/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 11:47:15 by pbeheyt           #+#    #+#             */
/*   Updated: 2022/03/13 22:35:54 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size)
	{
		j = i;
		while (j < size)
		{
			if (tab[i] > tab [j])
			{	
			tmp = tab[i];
			tab[i] = tab[j];
			tab[j] = tmp;
			}
		j++;
		}
	i++;
	}
}

void	main(void)
{
	int	tab[8] = {8, 5, 7, 6, 56, 45, 67, 86};

	ft_sort_int_tab(tab, 8);
}
