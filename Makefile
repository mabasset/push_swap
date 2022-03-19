# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mabasset <mabasset@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/05 12:22:32 by mabasset          #+#    #+#              #
#    Updated: 2022/03/18 04:05:17 by mabasset         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SRC = checker.c main.c swap.c push.c rotate.c rev_rotate.c utility.c find.c findcomb.c
OBJ = $(SRC:.c=.o)
FLAG = -Wall -Werror -Wextra
LIBFT = libft/libft.a

$(NAME):
		make re -C libft
		gcc $(FLAG) -o $(NAME) $(SRC) $(LIBFT)

all:	$(NAME)

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME) $(LIB)
		make fclean -C libft

re:		fclean all

.PHONY:	all clean fclean re