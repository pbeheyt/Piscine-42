/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 11:47:15 by pbeheyt           #+#    #+#             */
/*   Updated: 2022/03/27 22:50:27 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	main(int ac, char **av)
{
	long int	nb;
	char		*str;

	if (ac == 2)
		str = av[1];
	else if (ac == 3)
		str = av[2];
	else
	{	
		write(1, "Error\n", 6);
		return (0);
	}
	nb = ft_atoi(str);
	if (nb == -1)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	convert_all(nb, base);
	write(1, "\n", 1);
}
	/*char          *base[40];

        base[0] = "zero";
        base[1] = "one";
        base[2] = "two";
        base[3] = "three";
        base[4] = "four";
        base[5] = "five";
        base[6] = "six";
        base[7] = "seven";
        base[8] = "eight";
        base[9] = "nine";
        base[10] = "ten";
        base[11] = "eleven";
        base[12] = "twelve";
        base[13] = "thirteen";
        base[14] = "fourteen";
        base[15] = "fifteen";
        base[16] = "sixteen";
        base[17] = "seventeen";
        base[18] = "eighteen";
        base[19] = "nineteen";
        base[20] = "twenty";
        base[21] = "thirty";
        base[22] = "forty";
        base[23] = "fifty";
        base[24] = "sixty";
        base[25] = "seventy";
        base[26] = "eighty";
        base[27] = "ninety";
        base[28] = "hundred";
        base[29] = "thousand";
        base[30] = "million";
        base[31] = "billion";
        base[32] = "trillion";
        base[33] = "quadrillion";
        base[34] = "quintillion";
        base[35] = "sextillion";
        base[36] = "septillion";
        base[37] = "octillion";
        base[38] = "nonillion";
        base[39] = "decillion";
        base[40] = "undecillion";*/
