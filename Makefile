# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ocrobin <ocrobin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/04 12:38:55 by ocrobin           #+#    #+#              #
#    Updated: 2024/08/04 13:08:16 by ocrobin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := cc
CFLAGS := -Wall -Werror -Wextra
NAME := libftprintf.a
SRC := \
	ft_hex.c\
	ft_print_d.c\
	ft_percent.c\
	ft_printf.c\
	ft_ptrhex.c\
	ft_putchar.c\
	ft_putstr.c\
	ft_unsdec.c\
	ft_putnbr_fd.c
OBJ :=\
	ft_hex.o\
	ft_print_d.o\
	ft_percent.o\
	ft_printf.o\
	ft_ptrhex.o\
	ft_putchar.o\
	ft_putstr.o\
	ft_unsdec.o\
	ft_putnbr_fd.o
	
all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

$(NAME):$(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -c