/*
** EPITECH PROJECT, 2020
** is_prime_number.c
** File description:
** nombre premier = 1 sinon 0
*/

int is_prime_number(int nb)
{
    int i = 2;

    if (nb == 0 || nb == 1) {
        return (0);
    } else if (nb == 2) {
        return (1);
    } else {
        while (i < nb) {
            if (nb % i == 0) {
                return (0);
            }
            i = i + 1;
        }
        return(1);
    }
}
