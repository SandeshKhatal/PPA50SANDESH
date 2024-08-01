#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char Name[30];
    int fd =0;
    int iRet = 0;
    char Data[] = "Marvellous Infosystem";

    printf("Enter name of file that you want to write : \n");
    scanf("%s",Name);

    fd = open(Name, O_RDWR);  //o_RDWR = read write mode
    
    iRet = write(fd,Data,22);

    printf("%d bytes gets successfully written into the file\n,iRet");
    close(fd);
    return 0;
}