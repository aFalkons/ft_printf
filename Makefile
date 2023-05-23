# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afalconi <afalconi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/03 18:06:49 by afalconi          #+#    #+#              #
#    Updated: 2023/02/11 12:40:57 by afalconi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS = ft_printf.c utils.c utils2.c utils3.c

FLAGS = -g -Wall -Wextra -Werror
CC = gcc
OBJS = $(SRCS:.c=.o)
OBJSB = $(SRCSB:.c=.o)
.o:.c
	$(CC) $(FLAGS) -c $< -o ${<:.c=.o}
$(NAME): ${OBJS}
	make -C libft libft.a bonus
	cp libft/libft.a ./libftprintf.a
	ar rcs $(NAME) $(OBJS)
all: $(NAME)
bonus: ${NAME}

clean:
	make fclean -C libft
	rm -f $(OBJS) $(OBJSB)
fclean: clean
	rm -f $(NAME)
re: fclean all
