# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aastraeu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/10 14:29:35 by aastraeu          #+#    #+#              #
#    Updated: 2020/11/25 18:18:53 by aastraeu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_calloc.c ft_strdup.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_strmapi.c ft_itoa.c ft_split.c

SRCS_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

LIBFT_H	= libft.h 

OBGS	= ${SRCS:.c=.o}

OBGS_BONUS	= ${SRCS_BONUS:.c=.o}

NAME	= libft.a

CC		= gcc

RM		= rm -f

FLAGS	= -Wall -Wextra -Werror

all:		${NAME}

$(NAME):	${OBGS} ${LIBFT_H}
			${CC} ${FLAGS} ${LIBFT_H}
			ar rc ${NAME} ${OBGS}
			ranlib ${NAME}

bonus:		${LIBFT_H} ${OBGS_BONUS}
			${CC} ${FLAGS} ${LIBFT_H}
			ar rc ${NAME} ${OBGS_BONUS}

clean:	
			${RM} ${OBGS} ${OBGS_BONUS}

fclean:		clean
			${RM} ${NAME} libft.h.gch

re:			fclean all
