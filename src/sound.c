/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** sound
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

void display_sound(all *varia)
{
    varia->jump = sfSoundBuffer_createFromFile("tools/jump.wav");
    varia->sound = sfSound_create();
    sfSound_setBuffer(varia->sound, varia->jump);
}

sfMusic *soundcreate(sfMusic *sound)
{
    sound = sfMusic_createFromFile("tools/neon.wav");
    sfMusic_play(sound);
    sfMusic_setLoop(sound, sfTrue);
    return (sound);
}

void sound_destroy(sfMusic *sound)
{
    sfMusic_stop(sound);
    sfMusic_destroy(sound);
}