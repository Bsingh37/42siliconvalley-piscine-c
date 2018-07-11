/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 11:59:22 by bsingh            #+#    #+#             */
/*   Updated: 2018/07/08 13:02:58 by bsingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.c"
#include <stdio.h>
#include "ft_putchar.c"
#include <stdlib.h>
#include <unistd.h>

int        main(int argc, char **argv)
{
    int i;

    i = 0;
    char str[1000];

    while(argv[i])
    {
        printf("%s",argv[i]);
        i++;    
    }

    while (read(0, &str, 1))
    {
        printf("%s",str);
    }
    printf("%s",str);
    printf("%c",'\n');
    return (0);
}
