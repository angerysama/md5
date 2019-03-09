#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmarracc <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/10 12:37:05 by rmarracc          #+#    #+#              #
#    Updated: 2019/02/10 12:37:29 by rmarracc         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = ft_md5
SRC = srcs/main.c srcs/md5_resolve.c srcs/md5_padding.c srcs/md5_display.c srcs/libft_func.c
OBJ = $(SRC:.c=.o)
CC = @gcc
CFLAGS = -Wall -Wextra -Werror -Iincludes

all : $(NAME)

$(NAME) : $(OBJ)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
