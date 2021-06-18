/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** runner
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

void draw_runner(all *varia)
{
    varia->time = sfClock_getElapsedTime(varia->clock);
    varia->seconds = varia->time.microseconds / 1000000.0;
    sfSprite_setTextureRect(varia->spr_runner, varia->rect);
    sfRenderWindow_drawSprite(varia->window, varia->spr_runner, NULL);
}

void display_runner(all *varia)
{
    draw_runner(varia);
    if (varia->seconds > 0.1) {
        varia->rect.left += 84;
        sfClock_restart(varia->clock);
    } if (varia->rect.left == 504) {
        varia->rect.left = 0;
        sfClock_restart(varia->clock);
    }
    varia->pos_runner.x = sfSprite_getPosition(varia->spr_runner).x;
    varia->pos_runner.y = sfSprite_getPosition(varia->spr_runner).y;
}