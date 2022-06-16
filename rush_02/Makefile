# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nzincenk <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/27 14:06:44 by nzincenk          #+#    #+#              #
#    Updated: 2022/03/27 15:31:10 by nzincenk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
output: rush-02.o  convert.o print.o
	gcc -Wall -Wextra -Werror rush-02.o convert.o print.o -o rush-02

rush-02.o: rush-02.c
	gcc -Wall -Wextra -Werror -c rush-02.c

convert.o: convert.c rush.h
	gcc -Wall -Wextra -Werror -c convert.c

print.o: print.c rush.h
	gcc -Wall -Wextra -Werror -c print.c

fclean:
	rm *.o rush-02
