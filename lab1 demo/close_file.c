#include <fcntl.h>         
#include <sys/types.h>     
#include <sys/stat.h>      
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main()
{
	int fd1 = open("foo.txt", O_RDONLY);
	if (fd1 < 0)
	{
		perror("c1");
		exit(1);
	}
	printf("opened the fd = % d\n", fd1);
	
	// Using close system Call
	if (close(fd1) < 0)
	{
		perror("c1");
		exit(1);
	}
	printf("closed the fd.\n");
}

