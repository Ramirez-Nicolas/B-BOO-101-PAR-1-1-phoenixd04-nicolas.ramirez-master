/*
** EPITECH PROJECT, 2020
** duplicate_string.c
** File description:
** duplicate string
*/

#include <string.h>
#include <stdlib.h>

char *my_strcpy(char *dest, char const *src);

char *duplicate_string(char const *src)
{
    int i = 0;
    char *str;

    i = strlen(src) + 1;
    str = malloc(sizeof(char) * i);
    my_strcpy(str, src);
    return (str);
}
