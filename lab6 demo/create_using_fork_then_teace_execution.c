#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
void forkexample(){
int p=fork();
if(p==-1)
{
printf("Creation of child is unsuccessful\n");
}
else if(p==0)
{
printf("Child is running\n");
}
else if(p>0)
{
printf("Parent is running\n");
}
}
int main(){
forkexample();
return 0;
}
