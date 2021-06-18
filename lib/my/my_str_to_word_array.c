/*
** EPITECH PROJECT, 2019
** my_str_to_word_array
** File description:
** splits a string into word
*/

#include <stdlib.h>
#include <stdio.h>
#include "my.h"

int alphanum_char(char c)
{
    if (('a' <= c && c <= 'z') ||
        ('A' <= c && c <= 'Z') ||
        ('0' <= c && c <= '9') ||
        c == '#' || c == ' ')
        return (1);
    else
        return (0);
}

int nb_words(char const *str)
{
    int nb = 0;

    for (int i = 0; str[i]; i++)
        if (str[i] == '\n')
            nb++;
    return (nb);
}

int nbr_letter(char const *str, int i)
{
    int k;

    for (k = 0; str[k + i] != '\0'; k++)
        if (str[k + i] == '\n')
            return (k);
    return (k);
}

char **my_str_to_word_array(char const *str)
{
    char **tab;
    int nbr_word = nb_words(str);
    int i = 0;
    int j = 0;
    int m = 0;

    tab = malloc(sizeof(char *) * (nbr_word + 1));
    for (i = 0; i < nbr_word; i++) {
        tab[i] = malloc(sizeof(char) * (nbr_letter(str, j) + 1));
        for (int k = 0; k < nbr_letter(str, j); k++) {
            tab[i][k] = str[j + k];
            m++;
        }
        j += m;
        j++;
        m = 0;
    }
    return (tab);
}
