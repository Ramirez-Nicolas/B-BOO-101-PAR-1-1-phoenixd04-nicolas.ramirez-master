/*
** EPITECH PROJECT, 2020
** concat_paramaters.c
** File description:
** concat
*/

#include <stdlib.h>
#include <string.h>

int show_string(char  const *str);
int my_strlen(char const *str)
{
    int c = 0;

    while (str[c] != '\0') {
        c = c + 1;
    }
    return (c);
}

int param_len(int ac, char **av)
{
    int i = 0;
    int len = 0;

    while (i != ac) {
        len = len + (my_strlen(av[i]) + 1);
        i++;
    }
    return (len);
}

char *concat_parameters(int ac, char **av)
{
    char *str;
    int i = 0;
    int a = 0;
    int c = 0;

    str = malloc(sizeof(char) * (param_len(ac, av) + 1));
    while (i != ac) {
        a = 0;
        while (av[i][a] != '\0') {
            str[c] = av[i][a];
            c += 1;
            a += 1;
        }
        str[c] = '\n';
        i += 1;
        c += 1;
    }
    str[c] = '\0';
    return (str);
}
