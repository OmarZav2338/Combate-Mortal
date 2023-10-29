#include <allegro.h>
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <src/Personajes/Personajes.hpp>

using namespace std;

int main ()
{
    allegro_init();
    install_keyboard();

    set_color_depth(32);
    set_gfx_mode(GFX_AUTODETECT_WINDOWED, 1300,450,0,0);

    muneco p1;

    buffer=create_bitmap(1300,450);
    pd=load_bitmap("src\\Personajes\\LARA\\PD.bmp", NULL);
    pi=load_bitmap("src\\Personajes\\LARA\\PI.bmp", NULL);
    while(true){
    switch(pos){
case 1:
    blit(pd,screen, 0, 0, x, y, 38, 54);
    rest(120);
    blit(buffer, screen, 0, 0, 0, 0, 1300, 450);
    break;
case 2:
    blit(pi,screen, 0, 0, x, y, 38, 54);
    rest(120);
    blit(buffer, screen, 0, 0, 0, 0, 1300, 450);
    break;
    }
if (key[KEY_RIGHT]){
    pos=1;
    p1.caminarD();
}
if (key[KEY_LEFT]){
    pos=2;
    p1.caminarI();
}
if (key[KEY_UP]&&pos==1){
        p1.saltarD();
}
if (key[KEY_UP]&&pos==2){
        p1.saltarI();
}
if (key[KEY_D]){
        p1.ataque1(pos);
}
if (key[KEY_D]){
        p1.ataque1(pos);
}
if (key[KEY_F]){
        p1.ataque2(pos);
}
if (key[KEY_F]){
        p1.ataque2(pos);
}
if (key[KEY_G]){
        p1.ataque3(pos);
}
if (key[KEY_G]){
        p1.ataque3(pos);
}
    }//fin del while
    return 0;
}
END_OF_MAIN ()
