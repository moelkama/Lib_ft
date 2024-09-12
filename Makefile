# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: moelkama <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/23 09:45:41 by moelkama          #+#    #+#              #
#    Updated: 2022/10/28 12:43:41 by moelkama         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJS			=	ft_isalnum.o ft_isprint.o ft_memcmp.o  ft_putchar_fd.o ft_split.o \
					ft_strlcat.o ft_strncmp.o ft_substr.o ft_atoi.o ft_isalpha.o \
					ft_itoa.o ft_memcpy.o ft_putendl_fd.o ft_strchr.o  ft_strlcpy.o \
					ft_strnstr.o ft_tolower.o ft_bzero.o ft_isascii.o \
					ft_memmove.o ft_putnbr_fd.o ft_strdup.o  ft_strlen.o ft_strrchr.o \
					ft_toupper.o ft_calloc.o ft_isdigit.o ft_memchr.o ft_memset.o \
					ft_putstr_fd.o ft_strjoin.o ft_strmapi.o ft_strtrim.o ft_striteri.o

BONUS_OBJS			=	ft_lstadd_back_bonus.o ft_lstadd_front_bonus.o \
					ft_lstdelone_bonus.o ft_lstiter_bonus.o ft_lstlast_bonus.o \
					ft_lstnew_bonus.o ft_lstsize_bonus.o ft_lstclear_bonus.o ft_lstmap_bonus.o

NAME = libft.a
CFLAGS = -Wall -Wextra -Werror


all:	$(NAME)

$(NAME):$(OBJS)
	ar rc $(NAME) $?

clean:
	rm -f $(OBJS)
	rm -f $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re:fclean all

bonus:$(BONUS_OBJS)
	ar rc $(NAME) $?

.PHONY : all clean fclean re
