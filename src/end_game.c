/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** eng_game
*/

#include "my_runner.h"

int endgame(all *varia)
{
    sfTexture *text_win = sfTexture_createFromFile("tools/win.png", NULL);
    sfSprite *spr_win = sfSprite_create();
    sfSprite_setTexture(spr_win, text_win, sfTrue);
    while (sfRenderWindow_isOpen(varia->window)) {
        while (sfRenderWindow_pollEvent(varia->window, &varia->event)) {
            if (varia->event.type == sfEvtClosed ||
                (varia->event.type == sfEvtKeyPressed &&
                varia->event.key.code == sfKeyEscape))
                sfRenderWindow_close(varia->window);
        }
        sfRenderWindow_drawSprite(varia->window, spr_win, NULL);
        sfRenderWindow_display(varia->window);
    }
}