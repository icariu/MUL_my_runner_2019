/*
** EPITECH PROJECT, 2019
** my_strncmp
** File description:
** str & cmp
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && n - 1 > i)
        i++;
    return (s1[i] - s2[i]);
}
