/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** destroy
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

void destroy(all *varia)
{
    sfSprite_destroy(varia->sprite_0);
    sfTexture_destroy(varia->texture_0);
    sfSprite_destroy(varia->sprite_1);
    sfTexture_destroy(varia->texture_1);
    sfSprite_destroy(varia->sprite_2);
    sfTexture_destroy(varia->texture_2);
    sfSprite_destroy(varia->sprite_3);
    sfTexture_destroy(varia->texture_3);
    sfSprite_destroy(varia->sprite_4);
    sfTexture_destroy(varia->texture_4);
    sfSprite_destroy(varia->spr_runner);
    sfTexture_destroy(varia->text_runner);
    sfRenderWindow_destroy(varia->window);
    sfSound_destroy(varia->sound);
    sfSoundBuffer_destroy(varia->jump);
    sfText_destroy(varia->text);
    sfFont_destroy(varia->font);
}