/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** event
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

void init_val_jump(all *varia)
{
    sfVector2f jump = {0, -5};

    varia->rect.left = 0;
    varia->rect.top = 150;
    varia->rect.width = 83;
    varia->rect.height = 110;
    sfSprite_setTextureRect(varia->spr_runner, varia->rect);
    if (varia->cond == 0)
        sfSprite_move(varia->spr_runner, jump);
}

int jump(all *varia)
{
    sfVector2f low = {0, 5};

    init_val_jump(varia);
    if (varia->rect.left == 0 && varia->pos_runner.y == 537)
        varia->cond = 1;
    if (varia->rect.left == 0 && varia->cond == 1) {
        varia->rect.left += 89;
        sfSprite_move(varia->spr_runner, low);
    }
    if (varia->rect.left == 89 && varia->pos_runner.y == 812) {
        varia->rect.top = 0;
        varia->rect.left = 0;
        varia->rect.width = 88;
        varia->rect.height = 105;
        varia->cond = 0;
        return (0);
    }
    return (1);
}

int event_handle(all *varia)
{
    while (sfRenderWindow_pollEvent(varia->window, &varia->event)) {
        if (varia->event.type == sfEvtClosed ||
            (varia->event.type == sfEvtKeyPressed &&
            varia->event.key.code == sfKeyEscape))
            sfRenderWindow_close(varia->window);
        if (varia->event.type == sfEvtKeyPressed &&
            varia->event.key.code == sfKeySpace) {
            sfSound_play(varia->sound);
            return (1);
        }
    return (0);
    }
}