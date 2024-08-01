#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
//SEEK_SET  BEGINNING OF THE FILE
//SEEK_CUR  CURRENT POSITION
//SEEK_END  END OF FILE
int main()
{
    char Name[30];
    int fd =0;
    int iRet = 0;
    char Data[30] = {'\0'};

    printf("Enter name of file that you want to write : \n");
    scanf("%s",Name);

    fd = open(Name, O_RDONLY);  
    lseek(fd,SEEK_SET,10);
    iRet = read(fd,Data,10);

    printf("%d bytes gets successfully read from the file\n,iRet");
    printf("%s\n",Data);
    return 0;
}