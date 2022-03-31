# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_ceator.sh                                    :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pbeheyt <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/31 14:40:44 by pbeheyt           #+#    #+#              #
#    Updated: 2022/03/31 14:59:35 by pbeheyt          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC="ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c"
OBJ="ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o"
gcc -c -Wall -Wextra -Werror $SRC && ar rcs libft.a $OBJ && rm -f $OBJ
