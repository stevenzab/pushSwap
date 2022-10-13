/*
** EPITECH PROJECT, 2020
** Task05
** File description:
** Day04
*/

int my_getnbr(char *str)
{
    int i = 0;
    int j = 0;
    int v = 1;
    int s = 1;
    int z = 0;
    for (z; str[z] == '+' || str[z] == '-'; z = z + 1) {
        if (str[z] == '-')
        v = v * (-1);
    }
    for (i; str[i + z] >= '0' && str[i + z] <= '9'; i = i + 1) {
        s = s * 10;
    }
    s = s / 10;
    for (i = 0; str[i + z] >= '0' && str[i + z] <= '9'; i = i + 1) {
        j = j + (str[i + z] - '0') * (s) * v;
        s = s / 10;
    }
    return (j);
}
