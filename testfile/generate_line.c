#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <time.h>


void generate_line(void)
{
	int c, i;
	int fd;
	time_t s;

	s = time(NULL);
	fd = open("file.txt", O_RDWR | O_TRUNC | O_CREAT);
	i = (rand() + (int)s) % 10000;
	printf("i = %d\n", i);
	while (i)
	{
		c = (rand() + s) % 127;
		c += (((c + 32) <= 127 && c != 10) * 32);
		write (fd, &c, 1);
		i--;
	}
	close(fd);
}

int main ()
{
	generate_line();
	int fd =  open("file.txt", O_RDWR);

	char *s = get_next_line(fd);
	while (s)
	{
		printf("%s", s);
		s = get_next_line(fd);
	}
	close(fd);
}
