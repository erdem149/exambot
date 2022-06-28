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

void grademe(void)
{

}

int main(void)
{
    const char *str;

    while (g_satatus == 0)
    {
        str = readline("examshell>> ");
        if(!strcmp("exit",str))
            exit(0);
        if(!strcmp("grademe",str))
            grademe();
    }
    return(0);
}