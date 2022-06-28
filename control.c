#include "examshell.h"

int main(void)
{
    char *buff;
    int fd;
    int read_size;
    fd = open("./.tmp/userlogin.txt",O_RDONLY);
    read_size = read(fd,buff,5);
    if(read_size == 0)
        printf("0");
    else if(*buff == '1')
        printf("1");
}