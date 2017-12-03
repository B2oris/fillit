#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void	ft_buffcheck(char const *buff)
{
	
}

int		main(int argc, char *argv[])
{
	int file;
	int ret;
	char buff[200];

	if (argc != 2)
		return (write(1, "trop de fichier.\n", 17));
	file = open(argv[1], O_RDONLY);
	ret = read(file, buff, 200);
	ft_buffcheck(buff);
	return(0);
}
