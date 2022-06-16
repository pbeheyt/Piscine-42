/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 11:47:15 by pbeheyt           #+#    #+#             */
/*   Updated: 2022/03/12 12:18:10 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_h(int x)
{
	
	int 	i;

	i = 0;

	ft_putchar('o');
	while (i < x - 2)
	{	
		ft_putchar('-');
		i++;
	}
	if (x > 1)
		ft_putchar('o');
	ft_putchar('\n');
}

void ft_print_v(int x, int y)
{
	int 	i;
	
	i = 0;
	
	ft_putchar('|');
	if (x > 1)
	{
		while (i < x - 2 )
		{
			ft_putchar(' ');
			i++;
		}
		ft_putchar('|');
	}
	ft_putchar('\n');
}


void rush(int x, int y)
{
	int i;

	i = 0;

	ft_print_h(x);
	while (i < y - 2)
	{	
		ft_print_v(x, y);
		i++;
	}
	if (y > 1)
		ft_print_h(x);
}
	
void	main(void)
{	
	rush(3,5);
}
