#include <allegro.h>
#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int pos=1;
int x=60, y=365;

BITMAP *buffer;
BITMAP *pd;
BITMAP *pi;

class muneco{

private:

public:

};

int main ()
{
    allegro_init();
    install_keyboard();

    set_color_depth(32);
    set_gfx_mode(GFX_AUTODETECT_WINDOWED, 1300,450,0,0);

    buffer=create_bitmap(1300,450);
    pd=load_bitmap("pd.bmp", NULL);
    pi=load_bitmap("pi.bmp", NULL);
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

    }
    return 0;
}
END_OF_MAIN ()


