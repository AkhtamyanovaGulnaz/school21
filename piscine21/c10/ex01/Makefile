CFLAGS = -Wall -Wextra -Werror
CC = gcc
NAME = ft_cat
RM = rm -f


SOURCE = ft_cat.c
OBJECT = $(SOURCE:.c=.o)

.c.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all:        $(NAME)

$(NAME):    $(OBJECT)
			$(CC) $(CFLAGS) $(OBJECT) -o $(NAME)

clean:
			$(RM) $(OBJECT)

fclean:     clean
			$(RM) $(NAME)
