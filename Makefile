# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: stde-alm <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/12 12:00:59 by stde-alm          #+#    #+#              #
#    Updated: 2021/11/12 15:57:40 by stde-alm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c\
			ft_isprint.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strlen.c

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

HEADER = libft.h

CC		= gcc

CCLIB	= ar rc

CFLAGS	= -Wall -Wextra -Werror -g

RM		= rm -f

${NAME} :	${OBJS}
#			${CC} -o ${NAME} ${OBJS}
			${CCLIB} ${NAME} ${SRCS}

all:		${NAME}

norm:		
			norminette ${SRCS}
			norminette -RCheckDefine ${HEADER}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re norm