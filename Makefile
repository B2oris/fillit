NAME := fillit

SRC = fill.c bloc1.c

SRCS := $(addprefix ./srcs/, $(SRC))

FLAGS := -Wall -Werror -Wextra

INCLUDES := -I./includes/ -I./libft/

LIBS := -Llibft/ -lft

all : $(NAME)

$(NAME) :
	make -C libft/
	gcc $(FLAGS) $(INCLUDES) $(LIBS) $(SRCS) -o $(NAME)

clean :
	rm -rf $(NAME)

fclean : clean
	make -C libft/ fclean
	rm -rf $(SRC:.c=.o)

re : fclean all

.PHONY = $(NAME) all clean fclean re
