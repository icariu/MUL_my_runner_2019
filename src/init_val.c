/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** init_val
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

void create_everything(all *varia)
{
    create_a_window(varia);
    init_val(varia);
    create_all_sprites(varia);
    set_all(varia);
    display_sound(varia);
    create_score(varia);
}

void init_val(all *varia)
{
    srand(time(NULL));
    varia->clock = sfClock_create();
    varia->clock_bis = sfClock_create();
    varia->pos_runner.x = 100;
    varia->pos_runner.y = 812;
    varia->tmp = 0;
    varia->cond = 0;
    varia->rect.top = 0;
    varia->rect.left = 0;
    varia->rect.width = 88;
    varia->rect.height = 105;
    varia->offset_0.x = 0;
    varia->offset_1.x = 0;
    varia->offset_2.x = 0;
    varia->offset_3.x = 0;
    varia->offset_4.x = 0;
    varia->rect_im.left = 0;
    varia->rect_im.top = 0;
    varia->rect_im.width = 1920;
    varia->rect_im.height = 1080;
}

void create_all_sprites(all *varia)
{
    varia->text_runner = sfTexture_createFromFile("tools/runner.png", NULL);
    varia->spr_runner = sfSprite_create();
    sfSprite_setTexture(varia->spr_runner, varia->text_runner, sfTrue);
    sfSprite_setPosition(varia->spr_runner, varia->pos_runner);
}