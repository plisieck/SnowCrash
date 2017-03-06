#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	int 	i;
	int		fd;
	char	*buff;

	fd = open(argv[1], O_RDONLY);
	buff = (char *)malloc(sizeof(char) * 25);
	read(fd, buff, 25);

	i = 0;
	while (i < 25)
	{
		printf("%c", buff[i] - i);
		i++;
	}
	printf("\n");
}
