/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   user_authentication_login.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 15:01:55 by eryilmaz          #+#    #+#             */
/*   Updated: 2022/06/26 15:02:01 by eryilmaz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "../h/examshell.h"

int i = 0;

int main(void)
{
    int fd;
    int fy;
    fd = open("./.tmp/userlogin.txt",O_RDONLY);
    fy = open("./.tmp/stastus.txt",O_WRONLY);
    char *username;
    char *password_d;
    char *tmp_password;
    char *tmp_username;
    char *hideusername;
    char *hidepassword;
    tmp_username=readline("login: ");
    tmp_password=readline("password: ");
    hideusername=get_next_line(fd);
    hideusername=get_next_line(fd);
    hidepassword=get_next_line(fd);
    hideusername[ft_strlen(hideusername)-1]='\0';
    username=unpassword(hideusername);
    password_d = unpassword(hidepassword);
    tmp_username = ft_strjoin(tmp_username,"erdem\0");
    tmp_password = ft_strjoin(tmp_password,"erdem");
    if(i==4)
    {
        ft_putchar_fd('0',fy);
        close(fd);
        close(fy);
        exit(0);
    } 
    if (strcmp(tmp_username, username) == 0)
    {
        if(strcmp(tmp_password, password_d) == 0)
        {
            ft_putchar_fd('1',fy);
            close(fd);
            close(fy);
        }
        else
        {
            printf("hatalı şifre\n");
            i++;
            close(fd);
            close(fy);
            main();
        }
    }
    else
    {
        printf("hata kullanıcı adın kontrol et\n");
        i++;
        close(fd);
        close(fy);
        main();
    }
    // username = readline("login: ");
    // password_d = readline("password: ");
    // username = ft_strjoin(username,"erdem");
    // password_d = ft_strjoin(password_d,"erdem");
    // hideusername = password(username);
    // hidepassword = password(password_d);
    // ft_putstr_fd(hideusername,fd);
    // ft_putchar_fd('\n',fd);
    // ft_putstr_fd(hidepassword,fd);
}