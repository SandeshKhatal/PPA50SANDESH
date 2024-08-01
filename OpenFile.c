#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

//o_RDONLY  =  READ MODE
//O_WRONLY  =  WRITE MODE
//O_RDWR    =  READ & WRITE MODE
int main()
{
    char Name[30];
    int fd =0;

    printf("Enter name of file that you want to Open : \n");
    scanf("%s",Name);

    fd = open(Name, O_RDWR);  //o_RDWR = read write mode
    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("FILE GETS opened WITH FD %d \n ",fd); 
    }
    return 0;
}