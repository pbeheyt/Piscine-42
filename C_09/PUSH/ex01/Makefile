# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pbeheyt <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/31 15:08:45 by pbeheyt           #+#    #+#              #
#    Updated: 2022/03/31 17:42:24 by pbeheyt          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS_DIR= srcs
INC_DIR= includes
SRCS= ${SRCS_DIR}/ft_putchar.c ${SRCS_DIR}/ft_swap.c ${SRCS_DIR}/ft_putstr.c ${SRCS_DIR}/ft_strlen.c ${SRCS_DIR}/ft_strcmp.c
SRCS_DIR= srcs
OBJS= ${SRCS:.c=.o}
NAME= libft.a
CC = gcc
RM= rm -f
CFLAGS= -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -I ${INC_DIR}/ -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
		ar -rc $@ ${OBJS}

all: ${NAME}

clean :
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re:	fclean all

.PHONY:	all clean fclean re
