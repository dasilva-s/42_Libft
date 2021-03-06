# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: stde-alm <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/12 12:00:59 by stde-alm          #+#    #+#              #
#    Updated: 2021/11/30 10:59:18 by stde-alm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c\
			ft_isprint.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strlen.c\
			ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c\
			ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c\
			ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c\
			ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c\
			ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
			
BONUS	=

OBJS	= ${SRCS:.c=.o}

BONUS_OBJS	= ${BONUS:.c=.o}

NAME	= libft.a

HEADER = libft.h

CC		= gcc

CCLIB	= ar rc

NORM	= norminette

CFLAGS	= -Wall -Wextra -Werror

NFLAGS	= -RCheckForbiddenSourceHeader -RCheckDefine

RM		= rm -f

${NAME} :	${OBJS}
#			${CC} -o ${NAME} ${OBJS}
			${CCLIB} ${NAME} ${OBJS}
			ranlib ${NAME}

all:		${NAME}

normi:		fclean
			${NORM} ${NFLAGS} ${SRCS}
			${NORM} ${NFLAGS} ${HEADER}

bonus:		${OBJS} ${BONUS_OBJS}
			${CCLIB} ${NAME} ${SRCS} ${bonus_OBJS}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re normi bonus
