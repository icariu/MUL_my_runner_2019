/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** main
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

sfRenderWindow *create_a_window(all *varia)
{
    varia->mode.height = 1080;
    varia->mode.width = 1920;
    varia->mode.bitsPerPixel = 32;
    varia->window = sfRenderWindow_create(varia->mode, "my_runner",
    sfClose, NULL);
    return (varia->window);
}

void window_open(all *varia, obs *mob)
{
    static int nb = 0;

    while (sfRenderWindow_isOpen(varia->window)) {
        if (nb == 0)
            nb = event_handle(varia);
        else if (nb == 1)
            nb = jump(varia);
        draw_back(varia);
        display_runner(varia);
        display_score(varia);
        display_mobs(mob, varia);
        sfRenderWindow_display(varia->window);
    }
}

int main_loop(char *map, all *varia, obs *mob)
{
    sfMusic *sound = malloc(sizeof(sfMusic*));

    sound = soundcreate(sound);
    create_everything(varia);
    if (get_map(map, mob) == 84) {
        destroy(varia);
        sound_destroy(sound);
        return (84);
    }
    window_open(varia, mob);
    destroy(varia);
    sound_destroy(sound);
    return (0);
}

int main(int ac, char **av)
{
    all varia;
    obs mob;
    char *map;

    if (ac == 2) {
        if (check_if_h(ac, av) == 1)
            return (0);
        else
            map = av[1];
    }
    if (ac > 2)
        return (84);
    if (main_loop(map, &varia, &mob) == 84)
        return (84);
    return (0);
}