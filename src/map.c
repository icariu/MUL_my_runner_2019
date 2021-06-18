/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** map
*/

#include <stdio.h>
#include <stdlib.h>
#include "my_runner.h"

void create_obs(char *line, obs *mob)
{
    create_red_empty(mob);
    create_rose_empty(mob);
    create_blue_empty(mob);
    create_orange_empty(mob);
    for (int i = 0; line[i]; i++) {
        if (line[i] == '1')
            create_red(i, mob);
        if (line[i] == '2')
            create_blue(i, mob);
        if (line[i] == '3')
            create_rose(i, mob);
        if (line[i] == '4')
            create_orange(i, mob);
    }
}

int get_map(char *map, obs *mob)
{
    FILE *fp;
    char *line = NULL;
    size_t len = 0;
    int read;

    fp = fopen(map, "r");
    if (fp == NULL)
        return (84);
    read = getline(&line, &len, fp);
    fclose(fp);
    create_obs(line, mob);
}