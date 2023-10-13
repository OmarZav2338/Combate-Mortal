#include <allegro.h>
#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

BITMAP ~buffer;


int main ()
{
    allegro_init();
    install_keyboard();

    set_color_depth(32);
    set_gfx_mode(GFX_AUTODETECT_WINDOWED, 1300,450,0,0);

    buffer=create_bitmap(1300,450);

    return 0;
}
END_OF_MAIN ()


