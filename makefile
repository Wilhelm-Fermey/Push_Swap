# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wfermey <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/16 09:38:48 by wfermey           #+#    #+#              #
#    Updated: 2022/03/29 09:00:17 by wfermey          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 	push_swap

all :	
		make -C libft
		cc -Wall -Werror -Wextra -o $(NAME) libft/libft.a push_swap.c \
			push_check.c push_struct.c push_sort.c ft_operations.c \
			sort3.c sort4.c sort5.c sort6.c

debug :	
		make -C libft
		cc -g -Wall -Werror -Wextra -o $(NAME) libft/libft.a push_swap.c \
			push_check.c push_struct.c push_sort.c ft_operations.c \
			sort3.c
clean :
		make clean -C libft
		rm $(NAME)

fclean :
		make fclean -C libft
		rm $(NAME)

re : fclean all
	
