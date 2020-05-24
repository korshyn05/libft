# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tludwig <tludwig@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/10 20:03:08 by tludwig           #+#    #+#              #
#    Updated: 2020/05/24 18:50:29 by tludwig          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADER = libft.h

FUNCS = ft_memset ft_bzero ft_memcpy ft_memccpy ft_memmove ft_memchr ft_memcmp ft_strlen ft_strlcpy\
	ft_strlcat ft_strchr ft_strrchr ft_strnstr ft_strncmp ft_atoi ft_isalpha ft_isdigit ft_isalnum ft_isascii\
	ft_isprint ft_toupper ft_tolower ft_calloc ft_strdup ft_substr ft_strjoin ft_putchar_fd ft_putstr_fd\
	ft_putendl_fd ft_putnbr_fd ft_strmapi ft_itoa ft_strtrim ft_split

B_FUNCS = ft_lstadd_back ft_lstadd_front ft_lstclear ft_lstdelone ft_lstiter ft_lstlast ft_lstmap ft_lstnew ft_lstsize

SRC = $(patsubst %,%.c, $(FUNCS))

B_SRC = $(patsubst %,%.c, $(B_FUNCS))

SRC_OBJ = $(patsubst %,%.o, $(FUNCS))

OBJ_AND_HAEDER = $(patsubst %,%.o, $(FUNCS)) $(HEADER)

B_OBJ = $(patsubst %,%.o, $(B_FUNCS))

B_OBJ_AND_HEADER = $(patsubst %,%.o, $(B_FUNCS)) $(HEADER)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ_AND_HAEDER)
	gcc $(FLAGS) -c $(SRC)
	ar rcs $(NAME) $(SRC_OBJ)

bonus: $(B_OBJ_AND_HEADER)
	gcc $(FLAGS) -c $(B_SRC)
	ar rcs $(NAME) $(B_OBJ)
	touch bonus

clean:
	rm -f $(SRC_OBJ)
	rm -f $(B_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
