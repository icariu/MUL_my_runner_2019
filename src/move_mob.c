/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** move_mob
*/

#include "my_runner.h"

void create_blue_empty(obs *mob)
{
    mob->pos_b.x = 1920;
    mob->pos_b.y = 812;
    mob->text_b = sfTexture_createFromFile("tools/empty.png", NULL);
    mob->spr_b = sfSprite_create();
    sfSprite_setTexture(mob->spr_b, mob->text_b, sfTrue);
    sfSprite_setPosition(mob->spr_b, mob->pos_b);
}

void create_rose_empty(obs *mob)
{
    mob->pos_ro.x = 1920;
    mob->pos_ro.y = 812;
    mob->text_ro = sfTexture_createFromFile("tools/empty.png", NULL);
    mob->spr_ro = sfSprite_create();
    sfSprite_setTexture(mob->spr_ro, mob->text_ro, sfTrue);
    sfSprite_setPosition(mob->spr_ro, mob->pos_ro);
}

void create_orange_empty(obs *mob)
{
    mob->pos_o.x = 1920;
    mob->pos_o.y = 812;
    mob->text_o = sfTexture_createFromFile("tools/empty.png", NULL);
    mob->spr_o = sfSprite_create();
    sfSprite_setTexture(mob->spr_o, mob->text_o, sfTrue);
    sfSprite_setPosition(mob->spr_o, mob->pos_o);
}

void create_red_empty(obs *mob)
{
    mob->pos_re.x = 1920;
    mob->pos_re.y = 812;
    mob->text_re = sfTexture_createFromFile("tools/empty.png", NULL);
    mob->spr_re = sfSprite_create();
    sfSprite_setTexture(mob->spr_re, mob->text_re, sfTrue);
    sfSprite_setPosition(mob->spr_re, mob->pos_re);
}

void move_mob(obs *mob)
{
    sfVector2f pos_re, pos_o, pos_b;
    sfVector2f pos_ro;

    if (mob->spr_re) {
        pos_re = sfSprite_getPosition(mob->spr_re);
        if (pos_re.x <= -1500)
            sfSprite_setPosition(mob->spr_re, mob->pos_re);
    } if (mob->spr_o) {
        pos_o = sfSprite_getPosition(mob->spr_o);
        if (pos_o.x <= -1500)
            sfSprite_setPosition(mob->spr_o, mob->pos_o);
    } if (mob->spr_b) {
        pos_b = sfSprite_getPosition(mob->spr_b);
        if (pos_b.x <= -1500)
            sfSprite_setPosition(mob->spr_b, mob->pos_b);
    } if (mob->spr_ro) {
        pos_ro = sfSprite_getPosition(mob->spr_ro);
        if (pos_ro.x <= -1500)
            sfSprite_setPosition(mob->spr_ro, mob->pos_ro);
    }
}