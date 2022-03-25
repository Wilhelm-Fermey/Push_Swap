# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wfermey <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/02 08:58:38 by wfermey           #+#    #+#              #
#    Updated: 2022/02/25 09:01:41 by wfermey          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=  ft_isalpha.c	ft_memchr.c	ft_putchar_fd.c	ft_strchr.c \
ft_strlcpy.c ft_strrchr.c ft_atoi.c	ft_isascii.c ft_memcmp.c ft_putendl_fd.c \
ft_strdup.c	ft_strlen.c	ft_strtrim.c ft_bzero.c	ft_isdigit.c ft_memcpy.c \
ft_putnbr_fd.c	ft_striteri.c	ft_strmapi.c	ft_substr.c ft_calloc.c \
ft_isprint.c ft_memmove.c ft_putstr_fd.c ft_strjoin.c ft_strncmp.c \
ft_tolower.c ft_isalnum.c ft_itoa.c	ft_memset.c	ft_split.c ft_strlcat.c \
ft_strnstr.c ft_toupper.c

CFLAGS		= -Wall -Werror -Wextra

CC			= gcc
RM			= rm -f

OBJS		= ${SRCS:.c=.o}

NAME		= libft.a

.c.o:
			${CC} ${CFLAGS} -I. -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar rcs ${NAME} ${OBJS}

all:		${NAME}

clean:		
			${RM} ${OBJS} 

fclean:		clean
			${RM} ${NAME}

re:			fclean all
