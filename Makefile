$(SRC) =

all : fillit

fillit :
	gcc -wall -werror -wextra $(SRC) -o fillit

clean :
	rm -rf fillit

fclean : clean

re : fclean all
