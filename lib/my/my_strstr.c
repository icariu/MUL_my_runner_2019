/*
** EPITECH PROJECT, 2019
** my_strstr
** File description:
** my str str
*/

#include <stddef.h>

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int j = 0;

    while (str[i] != '\0') {
        while (str[i] == to_find[j] && to_find[j] != '\0') {
            i++;
            j++;
        }
        if (to_find[j] == '\0')
            return (str + i - j);
        i = i - j;
        j = 0;
        i++;
    }
    return (NULL);
}
