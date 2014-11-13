#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: schong <schong@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/03 17:06:34 by schong            #+#    #+#              #
#    Updated: 2014/11/10 12:41:46 by schong           ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a
CC = gcc
AR = ar rc
RANLIB = ranlib
RM = rm
CFLAGS = -Wall -Wextra -Werror
SRC = ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memccpy.c \
	ft_memmove.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_strlen.c \
	ft_strdup.c \
	ft_strcpy.c \
	ft_strncpy.c \
	ft_strcat.c \
	ft_strncat.c \
	ft_strlcat.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strstr.c \
	ft_strnstr.c \
	ft_strcmp.c \
	ft_strncmp.c \
	ft_atoi.c \
	ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_memalloc.c \
	ft_memdel.c \
	ft_strnew.c \
	ft_strdel.c \
	ft_strclr.c \
	ft_striter.c \
	ft_striteri.c \
	ft_strmap.c \
	ft_strmapi.c \
	ft_strsub.c \
	ft_strjoin.c \
	ft_strequ.c \
	ft_strnequ.c \
	ft_itoa.c \
	ft_putchar.c \
	ft_putstr.c \
	ft_putendl.c \
	ft_putnbr.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_strtrim.c \
	ft_strsplit.c \
	ft_lstnew.c \
	ft_lstiter.c \
	ft_lstadd.c
OBJ = $(SRC:.c=.o)
TEMP = $(SRC:.c=.c~)
LIBFLAGS = -L . -l ft

#RULE
all : $(NAME)

$(NAME) : $(OBJ)
	@$(AR) $@ $(OBJ) $^
	@$(RANLIB) $(NAME)

%.o : %.c
	@$(CC) -o $@ -c $< $(CFLAGS) -I .

#CLEAN

clean:
	@$(RM) -f $(OBJ)
	@$(RM) -f $(TEMP)

fclean: clean
	@$(RM) -f $(NAME)

re: fclean all

.PHONY: all clean fclean re