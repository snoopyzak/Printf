#variables

SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
CC	= cc
CFLAGS = -Wall -Wextra -Werror
NAME = printf.a
AR = ar -rcs
RM = rm -rf

#rules

all : $(NAME)

$(NAME) : $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all
