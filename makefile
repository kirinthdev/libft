# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sergmart <sergiomga136@gmail.com>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/26 12:46:36 by sergmart          #+#    #+#              #
#    Updated: 2024/01/26 17:40:06 by sergmart         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

# ---------------------------------------------------------------------------- #
#                                   INGREDIENTS                                #
# ---------------------------------------------------------------------------- #

CC = cc
CFLAGS = -Wall -Wextra -Werror

SOURCE = ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \

# ---------------------------------------------------------------------------- #
#                                   UTENSILS                                   #
# ---------------------------------------------------------------------------- #

# ---------------------------------------------------------------------------- #
#                                   RECIPES                                    #
# ---------------------------------------------------------------------------- #

$(NAME): $(SOURCE:.c=.o)
	ar rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(NAME) $(SOURCE:.c=.o)

fclean: clean
	@rm -f $(NAME)

re: fclean all

all: $(NAME)

# ---------------------------------------------------------------------------- #
#                                   SPEC                                       #
# ---------------------------------------------------------------------------- #

.PHONY: clean fclean re