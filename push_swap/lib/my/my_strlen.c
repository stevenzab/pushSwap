/*
** EPITECH PROJECT, 2020
** Task03
** File description:
** my_strlen
*/

int my_strlen(char const *str)
{
    int j;

    j = 0;
    while (str[j] != '\0') {
        j = j + 1;
    }
    return (j);
}
