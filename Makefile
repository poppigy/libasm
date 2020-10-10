# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qcraghas <qcraghas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/08 15:07:00 by qcraghas          #+#    #+#              #
#    Updated: 2020/10/10 17:27:59 by qcraghas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a
HEAD = libasm.h

SRCS =	ft_strlen.s ft_strcpy.s \
    	ft_strcmp.s ft_strdup.s \
		ft_write.s ft_read.s

SRCO =	ft_strlen.o ft_strcpy.o \
    	ft_strcmp.o ft_strdup.o \
		ft_write.o ft_read.o

all: $(NAME)

$(NAME): $(SRCO) $(HEAD)
	ar rc $(NAME) $(SRCO)
	gcc main.c $(SRCO) -L. -lasm -o test

$(SRCO): %.o:%.s
	nasm -f macho64 -s $<

clean:
	/bin/rm -rf *.o

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re