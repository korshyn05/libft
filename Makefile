# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tludwig <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/10 20:03:08 by tludwig           #+#    #+#              #
#    Updated: 2020/05/20 22:03:52 by tludwig          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FUNC = ft_atoi ft_bzero ft_calloc ft_isalnum ft_isalpha ft_isascii ft_isdigit \
	ft_isprint ft_itoa ft_memccpy ft_memchr ft_memcmp ft_memcpy ft_memmove \
	ft_memset ft_putchar_fd ft_putendl_fd ft_putnbr_fd ft_putstr_fd ft_split \
	ft_strchr ft_strdup ft_strjoin ft_strlcat ft_strlen ft_strmapi ft_strncmp \
	ft_strnstr ft_strrchr ft_strtrim ft_substr ft_tolower ft_toupper ft_strlcpy \
	ft_lstiter ft_lstadd_back ft_lstadd_front ft_lstlast ft_lstnew ft_lstsize \
	ft_lstclear ft_lstdelone ft_lstmap

BONUS = ft_lstiter ft_lstadd_back ft_lstadd_front ft_lstlast ft_lstnew ft_lstsize \
	ft_lstclear ft_lstdelone ft_lstmap

OBJ = $(patsubst %,%.o, $(FUNC))

SRC = $(patsubst %,%.c, $(FUNC))

B_OBJ = $(patsubst %,%.o, $(BONUS))

B_SRC = $(patsubst %,%.c, $(BONUS))

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)
	rm -f $(B_OBJ)


fclean: clean
	rm -f $(NAME)

bonus:
	gcc -Wall -Wextra -Werror -c $(B_SRC)
	ar rc $(NAME) $(B_OBJ)
	ranlib $(NAME)

re: fclean all
