NAME := fillit

SRC = test.c

SRCS := $(SRC:%=./srcs/%)

FLAGS := -Wall -Werror -Wextra

INCLUDES := -I./includes/ -I./libft/

LIBS := -Llibft/ -lft

all : $(NAME)

$(NAME) : 
	make -C libft/
	gcc $(INCLUDES) $(LIBS) $(SRCS) -o $(NAME)

clean :
	rm -rf $(NAME)

fclean : clean
	make -C libft/ fclean
	rm -rf $(SRC:.c=.o)

re : fclean all

ez :
	rm -rf $(NAME)
	gcc $(INCLUDES) $(LIBS) $(SRCS) -o $(NAME)

.PHONY = $(NAME) all clean fclean re
