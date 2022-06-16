/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 03:24:55 by pbeheyt           #+#    #+#             */
/*   Updated: 2022/03/27 22:44:31 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

# include <unistd.h>

void	ft_putstr(char *str);
long	int	ft_atoi(char *str);
void	print(char *str, int space);
void	ptint1000(long nb, char **base, int grpnb);
int		group_nb(long int nb);
long	int	ft_iterative_power(long int nb, int power);
void	convert_999(long int nb, char **base, int totalgrpnb);
void	convert_all(long int nb, char **base);

#endif
