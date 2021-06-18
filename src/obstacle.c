/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** obstacle
*/

#include "my_runner.h"

void display_mobs(obs *mob, all *varia)
{
    sfVector2f offset = {-3, 0};
    if (mob->spr_re) {
        sfRenderWindow_drawSprite(varia->window, mob->spr_re, NULL);
        sfSprite_move(mob->spr_re, offset);
    } if (mob->spr_ro) {
        sfRenderWindow_drawSprite(varia->window, mob->spr_ro, NULL);
        sfSprite_move(mob->spr_ro, offset);
    } if (mob->spr_b) {
        sfRenderWindow_drawSprite(varia->window, mob->spr_b, NULL);
        sfSprite_move(mob->spr_b, offset);
    } if (mob->spr_o) {
        sfRenderWindow_drawSprite(varia->window, mob->spr_o, NULL);
        sfSprite_move(mob->spr_o, offset);
    }
    move_mob(mob);
}

void create_red(int i, obs *mob)
{
    mob->pos_re.x = i * 100 + 1920;
    mob->pos_re.y = 812;
    mob->text_re = sfTexture_createFromFile("tools/red.png", NULL);
    mob->spr_re = sfSprite_create();
    sfSprite_setTexture(mob->spr_re, mob->text_re, sfTrue);
    sfSprite_setPosition(mob->spr_re, mob->pos_re);
}

void create_blue(int i, obs *mob)
{
    mob->pos_b.x = i * 100 + 1920;
    mob->pos_b.y = 812;
    mob->text_b = sfTexture_createFromFile("tools/blue.png", NULL);
    mob->spr_b = sfSprite_create();
    sfSprite_setTexture(mob->spr_b, mob->text_b, sfTrue);
    sfSprite_setPosition(mob->spr_b, mob->pos_b);
}

void create_rose(int i, obs *mob)
{
    mob->pos_ro.x = i * 100 + 1920;
    mob->pos_ro.y = 812;
    mob->text_ro = sfTexture_createFromFile("tools/rose.png", NULL);
    mob->spr_ro = sfSprite_create();
    sfSprite_setTexture(mob->spr_ro, mob->text_ro, sfTrue);
    sfSprite_setPosition(mob->spr_ro, mob->pos_ro);
}

void create_orange(int i, obs *mob)
{
    mob->pos_o.x = i * 100 + 1920;
    mob->pos_o.y = 812;
    mob->text_o = sfTexture_createFromFile("tools/orange.png", NULL);
    mob->spr_o = sfSprite_create();
    sfSprite_setTexture(mob->spr_o, mob->text_o, sfTrue);
    sfSprite_setPosition(mob->spr_o, mob->pos_o);
}