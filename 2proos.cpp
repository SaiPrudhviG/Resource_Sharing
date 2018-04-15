#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
 
void fork() 
{
    int x = 1;
     
    if (fork() == 0)
        printf("Child has x = %d\n", ++x);
        printf("Non-interactive process ")
    else
        printf("Parent has x = %d\n", --x);
        printf("Interactive Process")
}
int main()
{
    fork();
    return 0;
}
