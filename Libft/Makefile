# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/30 14:13:03 by youmoukh          #+#    #+#              #
#    Updated: 2023/11/12 17:53:21 by youmoukh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_isalpha.c ft_isascii.c ft_isprint.c ft_isdigit.c ft_isalnum.c ft_atoi.c \
	  ft_toupper.c ft_tolower.c ft_bzero.c  ft_strlen.c   ft_strlcat.c ft_strlcpy.c \
	  ft_strncmp.c ft_memmove.c ft_memcpy.c ft_strchr.c   ft_strrchr.c ft_memchr.c \
	  ft_strnstr.c ft_memset.c  ft_calloc.c ft_strdup.c  ft_strjoin.c ft_memcmp.c \
	  ft_split.c   ft_substr.c ft_strtrim.c	ft_itoa.c	  ft_strmapi.c ft_striteri.c \
	  ft_putchar_fd.c	ft_putstr_fd.c	ft_putendl_fd.c  ft_putnbr_fd.c  \

SRCB = ft_lstnew_bonus.c  ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstdelone_bonus.c

OBJ = ${SRC:.c=.o}
OBJB = ${SRCB:.c=.o}
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
INC = libft.h

all : ${NAME}

${NAME} : ${OBJ}
	ar rcs ${NAME} ${OBJ}

%.o : %.c ${INC}
	cc ${CFLAGS} -c $< -o $@

bonus : ${OBJB}
	ar rcs ${NAME} ${OBJB}

clean :
	rm -rf ${OBJ} ${OBJB}

fclean : clean
	rm -rf ${NAME}

re : fclean all

.PHONY : clean fclean re all bonus