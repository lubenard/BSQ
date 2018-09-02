# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lubenard <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/16 09:14:04 by lubenard          #+#    #+#              #
#    Updated: 2018/08/22 19:44:06 by lubenard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

CFLAG = -Wall -Werror -Wall -Iinclude/

SRCS =  src/ft.c\
		src/ft_utils.c\
		src/main.c\
		src/solve.c\
		src/create_table.c\
		src/ft_caract.c\
		src/realloc.c

OBJ = $(SRCS:.c=.o)

all : $(NAME)

$(NAME): $(OBJ)
	gcc $(CFLAG) $(OBJ) -o $(NAME)

%.o: $(SRCS)%.c
	gcc $(CFLAG) -o $@ -c $^

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re: fclean all
