/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exemshell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 16:40:01 by eryilmaz          #+#    #+#             */
/*   Updated: 2022/06/24 16:40:03 by eryilmaz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "examshell.h"
// #include <curses.h>
// #include <term.h>
void grademe(void)
{
    pid_t pro;
    
    pro = fork();
    if(pro < 0)
    {
        write(1,"hata",4);
        exit(1);
    }
    else if(pro == 0)
    {
        execl("./exam-mod.sh",NULL,NULL);
    }
}

int main(void)
{
    const char *str;
    
    while (g_satatus == 0)
    {
        str = readline("examshell>> ");
        if(!strcmp("finish",str))
            exit(0);
        if(!strcmp("grademe",str))
            grademe();
        usleep(100000);
    }
    return(0);
}