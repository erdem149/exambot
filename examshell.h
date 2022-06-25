/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   examshell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 16:58:21 by eryilmaz          #+#    #+#             */
/*   Updated: 2022/06/25 16:58:24 by eryilmaz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "./libft/libft.h"
int g_satatus=0;