/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** my_runner
*/

#ifndef MY_RUNNER_H_
#define MY_RUNNER_H_

#include <SFML/Graphics.h>
#include <SFML/Audio.h>

typedef struct obstacle {
    sfVector2f offset_re;
    sfVector2f offset_o;
    sfVector2f offset_b;
    sfVector2f offset_ro;
    sfTexture *text_re;
    sfTexture *text_o;
    sfTexture *text_b;
    sfTexture *text_ro;
    sfSprite *spr_re;
    sfSprite *spr_o;
    sfSprite *spr_b;
    sfSprite *spr_ro;
    sfVector2f pos_re;
    sfVector2f pos_o;
    sfVector2f pos_b;
    sfVector2f pos_ro;
}obs;

typedef struct game_object {
    sfVideoMode mode;
    sfRenderWindow* window;
    sfIntRect rect_im;
    sfIntRect rect;
    sfVector2f offset_0;
    sfVector2f offset_1;
    sfVector2f offset_2;
    sfVector2f offset_3;
    sfVector2f offset_4;
    sfVector2f offset_r;
    sfVector2f pos_runner;
    sfTexture *texture_0;
    sfTexture *texture_1;
    sfTexture *texture_2;
    sfTexture *texture_3;
    sfTexture *texture_4;
    sfTexture *text_runner;
    sfSprite *sprite_0;
    sfSprite *sprite_1;
    sfSprite *sprite_2;
    sfSprite *sprite_3;
    sfSprite *sprite_4;
    sfSprite *spr_runner;
    sfClock *clock;
    sfClock *clock_bis;
    sfTime time;
    sfTime time_bis;
    sfEvent event;
    sfSound *sound;
    sfSoundBuffer *jump;
    sfText *text;
    sfFont *font;
    float seconds;
    float seconds_bis;
    int tmp;
    int cond;
}all;

void draw_back(all *varia);
void set_all(all *varia);
void create_all_sprites(all *varia);
void init_val(all *varia);
void display_runner(all *varia);
void draw_runner(all *varia);
void display_info(void);
int check_if_h(int ac, char **av);
void destroy(all *varia);
int jump(all *varia);
int event_handle(all *varia);
sfMusic *soundcreate(sfMusic *sound);
void sound_destroy(sfMusic *sound);
void display_sound(all *varia);
void display_score(all *varia);
void create_score(all *varia);
void create_everything(all *varia);
sfRenderWindow *create_a_window(all *varia);
int get_map(char *map, obs *mob);
void create_red(int i, obs *mob);
void create_orange(int i, obs *mob);
void create_rose(int i, obs *mob);
void create_blue(int i, obs *mob);
void move_mob(obs *mob);
void display_mobs(obs *mob, all *varia);
void create_blue_empty(obs *mob);
void create_rose_empty(obs *mob);
void create_orange_empty(obs *mob);
void create_red_empty(obs *mob);
int endgame(all *varia);

#endif /* !MY_RUNNER_H_ */
