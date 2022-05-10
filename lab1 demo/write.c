// C program to illustrate
// write system Call
#include<stdio.h>
#include <fcntl.h>
main()
{
int sz;

int fd = open("foo.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
if (fd < 0)
{
	perror("r1");
	exit(1);
}

sz = write(fd, "hello sam\n", strlen("hello sam\n"));

printf("called write(% d, \"hello sam\\n\", %d)."
	" It returned %d\n", fd, strlen("hello sam\n"), sz);

close(fd);
}

