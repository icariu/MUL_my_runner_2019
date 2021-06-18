/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** draw_back
*/

#include "my_runner.h"

void set_all(all *varia)
{
    varia->texture_0 = sfTexture_createFromFile("tools/layer_01.png", NULL);
    varia->sprite_0 = sfSprite_create();
    sfSprite_setTexture(varia->sprite_0, varia->texture_0, sfTrue);
    varia->texture_1 = sfTexture_createFromFile("tools/layer_02_bis.png", NULL);
    varia->sprite_1 = sfSprite_create();
    sfSprite_setTexture(varia->sprite_1, varia->texture_1, sfTrue);
    varia->texture_2 = sfTexture_createFromFile("tools/layer_03_bis.png", NULL);
    varia->sprite_2 = sfSprite_create();
    sfSprite_setTexture(varia->sprite_2, varia->texture_2, sfTrue);
    varia->texture_3 = sfTexture_createFromFile("tools/layer_04_bis.png", NULL);
    varia->sprite_3 = sfSprite_create();
    sfSprite_setTexture(varia->sprite_3, varia->texture_3, sfTrue);
    varia->texture_4 = sfTexture_createFromFile("tools/layer_05_bis.png", NULL);
    varia->sprite_4 = sfSprite_create();
    sfSprite_setTexture(varia->sprite_4, varia->texture_4, sfTrue);
}

void draw_back(all *varia)
{
    varia->offset_1.x <= -1920 ? varia->offset_1.x = 0 : 0;
    varia->offset_2.x <= -1920 ? varia->offset_2.x = 0 : 0;
    varia->offset_3.x <= -1920 ? varia->offset_3.x = 0 : 0;
    varia->offset_4.x <= -1920 ? varia->offset_4.x = 0 : 0;
    varia->offset_1.x -= 0.2;
    varia->offset_2.x -= 0.5;
    varia->offset_3.x -= 0.7;
    varia->offset_4.x -= 0.7;
    sfRenderWindow_drawSprite(varia->window, varia->sprite_0, NULL);
    sfSprite_setPosition(varia->sprite_1, varia->offset_1);
    sfRenderWindow_drawSprite(varia->window, varia->sprite_1, NULL);
    sfSprite_setPosition(varia->sprite_2, varia->offset_2);
    sfRenderWindow_drawSprite(varia->window, varia->sprite_2, NULL);
    sfSprite_setPosition(varia->sprite_3, varia->offset_3);
    sfRenderWindow_drawSprite(varia->window, varia->sprite_3, NULL);
    sfSprite_setPosition(varia->sprite_4, varia->offset_4);
    sfRenderWindow_drawSprite(varia->window, varia->sprite_4, NULL);
}