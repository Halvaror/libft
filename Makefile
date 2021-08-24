# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alopez-b <alopez-b@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/21 22:05:02 by alopez-b          #+#    #+#              #
#    Updated: 2021/08/24 20:34:12 by alopez-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
		ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c \
		ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c \
		ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c \
		ft_strrchr.c ft_substr.c ft_tolower.c ft_toupper.c	ft_strjoin.c \
		ft_strtrim.c

OBJS		= $(SRCS:.c=.o)

RM 			= rm -f

CC 			= gcc

CFLAGS 	= -Wall -Wextra -Werror

NAME 		= libft.a

all: 		$(NAME)

$(NAME):	$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)

fclean: 	clean
				$(RM) $(NAME)

re: 		fclean all

.PHONY:		all clean fclean re