/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** usage
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

void display_info(void)
{
    my_putstr("\tWelcome to a runner game!\n\n");
    my_putstr("The rules are super simple: all you have to do");
    my_putstr(" is to run as long as you can.\n");
    my_putstr("To do so :\n\t- click on the space bar to jump ");
    my_putstr("and avoid the obstacles\n");
    my_putstr("\t- if you want to leave the game, just press 'echap'\n");
    my_putstr("\t- your score is displayed at the top left of the window\n");
    my_putstr("\t- no possibility to pause the game:");
    my_putstr(" it would be too easy to be able to rest.\n");
    my_putstr("\t- you will automatically win after 50 seconds in game.\n");
}

int check_if_h(int ac, char **av)
{
    if (av[1][0] == '-' && av[1][1] == 'h') {
        display_info();
        return (1);
    }
    return (0);
}