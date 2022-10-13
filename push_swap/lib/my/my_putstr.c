/*
** EPITECH PROJECT, 2020
** ok
** File description:
** a
*/

#include "../../include/my.h"

int my_putstr(char const *str)
{
    int j;

    j = 0;
    while (str[j] != '\0') {
        my_putchar(str[j]);
        j = j + 1;
    }
    return (0);
}

