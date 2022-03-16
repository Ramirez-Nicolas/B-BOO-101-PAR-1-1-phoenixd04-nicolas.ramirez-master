/*
** EPITECH PROJECT, 2020
** to_numbers.c
** File description:
** get nbr
*/

#include <stdio.h>

void my_putchar(char c);

int show_number(int nb);

int to_number(char const *str)
{
    int i = 0;
    int c = 0;
    int nb = 0;
    int neg = 1;

    while (str[i] != '\0' && (str[i] == '+' || str[i] == '-')) {
        if (str[i] == '-')
            neg = neg * -1;
        i = i + 1;
    }
    while (str[i] >= '0' && str[i] <= '9' && str[i] >= 0) {
        c = str[i] - '0';
        nb = nb * 10 + c;
        i = i + 1;
    }
    nb = nb * neg;
    show_number(nb);
    return (nb);
}
