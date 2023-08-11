# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: daribeir <na.3@laposte.net>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/26 04:47:11 by daribeir          #+#    #+#              #
#    Updated: 2023/08/11 07:46:16 by daribeir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS =	ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strlcpy.c \
		ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
		ft_strcmp.c ft_strncmp.c ft_strstr.c ft_strnstr.c ft_isalpha.c \
		ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c \
		ft_tolower.c ft_atoi.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c \
		ft_memmove.c ft_memchr.c ft_memcmp.c \
		ft_memalloc.c ft_memdel.c ft_realloc.c ft_calloc.c ft_strnew.c \
		ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c \
		ft_strmapi.c ft_strequ.c ft_strnequ.c ft_substr.c \
		ft_strjoin.c ft_strtrim.c

OBJS = ${SRCS:.c=.o}

CC		= gcc
RM		= rm -f

CFLAGS = -Wall -Wextra -Werror -g3

.PHONY: all clean fclean re so

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS)

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)

all: ${NAME}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re: fclean all
