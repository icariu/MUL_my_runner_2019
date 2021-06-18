/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** score
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <time.h>
#include <stddef.h>
#include <stdlib.h>
#include "my.h"
#include "my_runner.h"

void create_score(all *varia)
{
    varia->font = sfFont_createFromFile("tools/Prisma.ttf");
    if (!varia->font)
        return;
    varia->text = sfText_create();
    sfText_setFont(varia->text, varia->font);
    sfText_setCharacterSize(varia->text, 50);
}

void display_score(all *varia)
{
    char *str;

    varia->time_bis = sfClock_getElapsedTime(varia->clock_bis);
    varia->seconds_bis = varia->time_bis.microseconds / 1000000.0;
    str = my_itoa(varia->seconds_bis);
    sfText_setString(varia->text, str);
    sfRenderWindow_drawText(varia->window, varia->text, NULL);
    if (str[0] == '5' && str[1] == '0')
            endgame(varia);
}