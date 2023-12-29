#include "get_next_line.h"

int main ()
{
	int  fd;

	fd = open("file.txt", O_RDONLY);

	char *s = get_next_line(fd);
	while (s)
	{
		printf("%s", s);
		s = get_next_line(fd);
	}
	// printf("%s", s);
	// s = get_next_line(-1);
	// printf("%s\n", s);
	// s = get_next_line(fd);
	// printf("%s", s);
}

// int main ()
// {
// 	int fd = open("file.txt",  O_RDONLY);
// 	char *s = malloc(50 * sizeof(char));
// 	int byte = read(fd, s, 5);
// 	s[byte] = 0;
// 	printf("%s", s);

// 	byte =  read(-1, s, 5);
// 	if (byte == -1)
// 	{
// 		if(s)
// 		{
// 			printf("\nfree s\n");
// 			free(s);
// 		}
// 		s = NULL;
// 	}
// 	printf("%s", s);


// 	s = malloc(50 * sizeof(char));
// 	byte = read(fd, s, 5);
// 	if (byte == -1)
// 		printf("read error\n");
// 	s[byte] = 0;
// 	printf("%s", s);

// }