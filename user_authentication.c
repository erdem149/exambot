#include "examshell.h"

int main(void)
{
    int fd;
    fd = open("./.tmp/userlogin.txt",O_WRONLY);
    char *username;
    char *password_d;
    char *hideusername;
    char *hidepassword;
    char **str;
    username = readline("login: ");
    password_d = readline("password: ");
    username = ft_strjoin(username,"erdem");
    password_d = ft_strjoin(password_d,"erdem");
    hideusername = password(username);
    hidepassword = password(password_d);
    ft_putstr_fd(hideusername,fd);
    ft_putstr_fd(hidepassword,fd);
    close(fd);
}
// #include <stdio.h>
// void main()
// {
//  char pasword[10],usrname[10], ch;
//  int i;
//  clrscr();

//  printf("Enter User name: ");
//  gets(usrname);
//  printf("Enter the password <any 8 characters>: ");

//  for(i=0;i<8;i++)
//  {
//   ch = getch();
//   pasword[i] = ch;
//   ch = '*' ;
//   printf("%c",ch);
//  }

//  /*If you want to know what you have entered as password, you can print it*/
//  printf("nYour password is :");

//  for(i=0;i<8;i++)
//  {
//   printf("%c",pasword[i]);
//  }
// }
