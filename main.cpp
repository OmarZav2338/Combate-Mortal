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
    //Movimiento del personaje hacia la derecha
    BITMAP *pd1 = load_bitmap("C:\\Users\\Omar Z\\Documents\\GitHub\\Combate-Mortal\\Personajes\\LARA\\Caminata\\Derecha\\Caminar1.bmp", NULL);
    BITMAP *pd2 = load_bitmap("C:\\Users\\Omar Z\\Documents\\GitHub\\Combate-Mortal\\Personajes\\LARA\\Caminata\\Derecha\\Caminar2.bmp", NULL);
    BITMAP *pd3 = load_bitmap("C:\\Users\\Omar Z\\Documents\\GitHub\\Combate-Mortal\\Personajes\\LARA\\Caminata\\Derecha\\Caminar3.bmp", NULL);
    BITMAP *pd4 = load_bitmap("C:\\Users\\Omar Z\\Documents\\GitHub\\Combate-Mortal\\Personajes\\LARA\\Caminata\\Derecha\\Caminar4.bmp", NULL);
    BITMAP *pd5 = load_bitmap("C:\\Users\\Omar Z\\Documents\\GitHub\\Combate-Mortal\\Personajes\\LARA\\Caminata\\Derecha\\Caminar5.bmp", NULL);
    BITMAP *pd6 = load_bitmap("C:\\Users\\Omar Z\\Documents\\GitHub\\Combate-Mortal\\Personajes\\LARA\\Caminata\\Derecha\\Caminar6.bmp", NULL);

    //Movimiento del personaje hacia la izquierda
    BITMAP *pi1 = load_bitmap("C:\\Users\\Omar Z\\Documents\\GitHub\\Combate-Mortal\\Personajes\\LARA\\Caminata\\Izquierda\\Caminar1.bmp", NULL);
    BITMAP *pi2 = load_bitmap("C:\\Users\\Omar Z\\Documents\\GitHub\\Combate-Mortal\\Personajes\\LARA\\Caminata\\Izquierda\\Caminar2.bmp", NULL);
    BITMAP *pi3 = load_bitmap("C:\\Users\\Omar Z\\Documents\\GitHub\\Combate-Mortal\\Personajes\\LARA\\Caminata\\Izquierda\\Caminar3.bmp", NULL);
    BITMAP *pi4 = load_bitmap("C:\\Users\\Omar Z\\Documents\\GitHub\\Combate-Mortal\\Personajes\\LARA\\Caminata\\Izquierda\\Caminar4.bmp", NULL);
    BITMAP *pi5 = load_bitmap("C:\\Users\\Omar Z\\Documents\\GitHub\\Combate-Mortal\\Personajes\\LARA\\Caminata\\Izquierda\\Caminar5.bmp", NULL);
    BITMAP *pi6 = load_bitmap("C:\\Users\\Omar Z\\Documents\\GitHub\\Combate-Mortal\\Personajes\\LARA\\Caminata\\Izquierda\\Caminar6.bmp", NULL);

    //Movimiento del personaje con salto hacia la derecha
    BITMAP *psd1 = load_bitmap("C:\\Users\\Omar Z\\Documents\\GitHub\\Combate-Mortal\\Personajes\\LARA\\Salto\\Derecha\\Salto0.bmp", NULL);
    BITMAP *psd2 = load_bitmap("C:\\Users\\Omar Z\\Documents\\GitHub\\Combate-Mortal\\Personajes\\LARA\\Salto\\Derecha\\Salto1.bmp", NULL);
    BITMAP *psd3 = load_bitmap("C:\\Users\\Omar Z\\Documents\\GitHub\\Combate-Mortal\\Personajes\\LARA\\Salto\\Derecha\\Salto2.bmp", NULL);
    BITMAP *psd4 = load_bitmap("C:\\Users\\Omar Z\\Documents\\GitHub\\Combate-Mortal\\Personajes\\LARA\\Salto\\Derecha\\Salto3.bmp", NULL);
    BITMAP *psd5 = load_bitmap("C:\\Users\\Omar Z\\Documents\\GitHub\\Combate-Mortal\\Personajes\\LARA\\Salto\\Derecha\\Salto4.bmp", NULL);
    BITMAP *psd6 = load_bitmap("C:\\Users\\Omar Z\\Documents\\GitHub\\Combate-Mortal\\Personajes\\LARA\\Salto\\Derecha\\Salto5.bmp", NULL);

    //Movimiento del personaje con salto hacia la izquierda
    BITMAP *psi1 = load_bitmap("C:\\Users\\Omar Z\\Documents\\GitHub\\Combate-Mortal\\Personajes\\LARA\\Salto\\Izquierda\\Salto0.bmp", NULL);
    BITMAP *psi2 = load_bitmap("C:\\Users\\Omar Z\\Documents\\GitHub\\Combate-Mortal\\Personajes\\LARA\\Salto\\Izquierda\\Salto1.bmp", NULL);
    BITMAP *psi3 = load_bitmap("C:\\Users\\Omar Z\\Documents\\GitHub\\Combate-Mortal\\Personajes\\LARA\\Salto\\Izquierda\\Salto2.bmp", NULL);
    BITMAP *psi4 = load_bitmap("C:\\Users\\Omar Z\\Documents\\GitHub\\Combate-Mortal\\Personajes\\LARA\\Salto\\Izquierda\\Salto3.bmp", NULL);
    BITMAP *psi5 = load_bitmap("C:\\Users\\Omar Z\\Documents\\GitHub\\Combate-Mortal\\Personajes\\LARA\\Salto\\Izquierda\\Salto4.bmp", NULL);
    BITMAP *psi6 = load_bitmap("C:\\Users\\Omar Z\\Documents\\GitHub\\Combate-Mortal\\Personajes\\LARA\\Salto\\Izquierda\\Salto5.bmp", NULL);


public:

    void caminarD(){
    blit(buffer, screen, 0, 0, 0, 0, 1300, 450);
    if(key[KEY_RIGHT])
    {
        x+=20;
        blit(pd1, screen, 0, 0, x, y, 38, 54);
        rest(120);
        blit(buffer, screen, 0, 0, 0, 0, 1300, 450);
        if(key[KEY_RIGHT])
        {
            x+=20;
            blit(pd2, screen, 0, 0, x, y, 38, 54);
            rest(120);
            blit(buffer, screen, 0, 0, 0, 0, 1300, 450);
                if(key[KEY_RIGHT])
        {
                x+=20;
                blit(pd3, screen, 0, 0, x, y, 38, 54);
                rest(120);
                blit(buffer, screen, 0, 0, 0, 0, 1300, 450);
                if(key[KEY_RIGHT])
            {
                    x+=20;
                    blit(pd4, screen, 0, 0, x, y, 38, 54);
                    rest(120);
                    blit(buffer, screen, 0, 0, 0, 0, 1300, 450);
                    if(key[KEY_RIGHT])
                {
                        x+=20;
                        blit(pd5, screen, 0, 0, x, y, 38, 54);
                        rest(120);
                        blit(buffer, screen, 0, 0, 0, 0, 1300, 450);
                            if(key[KEY_RIGHT])
                        {
                                x+=20;
                                blit(pd6, screen, 0, 0, x, y, 38, 54);
                                rest(120);
                                blit(buffer, screen, 0, 0, 0, 0, 1300, 450);
                        }
                    }
                }
            }
        }
    }
}
    void caminarI(){
    blit(buffer, screen, 0, 0, 0, 0, 1300, 450);
    if(key[KEY_LEFT])
    {
        x-=20;
        blit(pi1, screen, 0, 0, x, y, 38, 54);
        rest(120);
        blit(buffer, screen, 0, 0, 0, 0, 1300, 450);
        if(key[KEY_LEFT])
        {
            x-=20;
            blit(pi2, screen, 0, 0, x, y, 38, 54);
            rest(120);
            blit(buffer, screen, 0, 0, 0, 0, 1300, 450);
                if(key[KEY_LEFT])
        {
                x-=20;
                blit(pi3, screen, 0, 0, x, y, 38, 54);
                rest(120);
                blit(buffer, screen, 0, 0, 0, 0, 1300, 450);
                if(key[KEY_LEFT])
            {
                    x-=20;
                    blit(pi4, screen, 0, 0, x, y, 38, 54);
                    rest(120);
                    blit(buffer, screen, 0, 0, 0, 0, 1300, 450);
                    if(key[KEY_LEFT])
                {
                        x-=20;
                        blit(pi5, screen, 0, 0, x, y, 38, 54);
                        rest(120);
                        blit(buffer, screen, 0, 0, 0, 0, 1300, 450);
                            if(key[KEY_LEFT])
                        {
                                x-=20;
                                blit(pi6, screen, 0, 0, x, y, 38, 54);
                                rest(120);
                                blit(buffer, screen, 0, 0, 0, 0, 1300, 450);
                        }
                    }
                }
            }
        }
    }

    }
    void saltarD(){
        blit(buffer,screen, 0, 0, 0, 0, 1300, 450);
        int j=0;
        if(key[KEY_UP]){
            if(key[KEY_RIGHT]) j+=25;

            blit(psd1, screen,0,0,x+j,y-20,38,54);
            rest(120);
            blit(buffer, screen,0,0,0,0,1300,450);
            if(key[KEY_UP])
            {
                if(key[KEY_RIGHT]) j+=25;
                y-=20;
                blit(psd2, screen,0,0,x+j,y-20,38,54);
                rest(120);
                blit(buffer, screen,0,0,0,0,1300,450);
                if(key[KEY_UP]){
                    if(key[KEY_RIGHT]) j+=25;
                    y-=20;
                    blit(psd3, screen,0,0,x+j,y-20,38,54);
                    rest(120);
                    blit(buffer, screen,0,0,0,0,1300,450);
                    if(key[KEY_UP]){
                        if(key[KEY_RIGHT]) j+=25;
                        y-=20;
                        blit(psd4, screen,0,0,x+j,y-20,38,54);
                        rest(120);
                        blit(buffer, screen,0,0,0,0,1300,450);
                        if(key[KEY_UP]){
                            if(key[KEY_RIGHT]) j+=25;
                            y+=20;
                            blit(psd5, screen,0,0,x+j,y-20,38,54);
                            rest(120);
                            blit(buffer, screen,0,0,0,0,1300,450);
                            if(key[KEY_UP]){
                                if(key[KEY_RIGHT]) j+=25;
                                y+=20;
                                blit(psd6, screen,0,0,x+j,y-20,38,54);
                                rest(120);
                                blit(buffer, screen,0,0,0,0,1300,450);
                            }
                            else{
                                if(key[KEY_RIGHT]) j+=25;
                                blit(buffer, screen,0,0,0,0,1300,450);
                                y+=20;
                                blit(psd3,screen,0,0,x+j,y-20,38,54);
                                rest(120);

                                blit(buffer, screen,0,0,0,0,1300,450);
                                y+=20;
                                blit(psd2,screen,0,0,x+j,y-20,38,54);
                                rest(120);

                                blit(buffer, screen,0,0,0,0,1300,450);
                                y+=20;
                                blit(psd1,screen,0,0,x+j,y-20,38,54);
                                rest(120);

                                blit(buffer, screen,0,0,0,0,1300,450);
                            }
                        }
                        else{
                                if(key[KEY_RIGHT]) j+=25;
                                blit(buffer, screen,0,0,0,0,1300,450);
                                y+=20;
                                blit(psd3,screen,0,0,x+j,y-20,38,54);
                                rest(120);

                                blit(buffer, screen,0,0,0,0,1300,450);
                                y+=20;
                                blit(psd2,screen,0,0,x+j,y-20,38,54);
                                rest(120);

                                blit(buffer, screen,0,0,0,0,1300,450);
                                blit(psd1,screen,0,0,x+j,y-20,38,54);
                                rest(120);

                                blit(buffer, screen,0,0,0,0,1300,450);
                            }
                    }
                else{
                                if(key[KEY_RIGHT]) j+=25;

                                blit(buffer, screen,0,0,0,0,1300,450);
                                y+=20;
                                blit(psd2,screen,0,0,x+j,y-20,38,54);
                                rest(120);

                                blit(buffer, screen,0,0,0,0,1300,450);
                                blit(psd1,screen,0,0,x+j,y-20,38,54);
                                rest(120);

                                blit(buffer, screen,0,0,0,0,1300,450);
                            }
                }
                else{
                                if(key[KEY_RIGHT]) j+=25;

                                blit(buffer, screen,0,0,0,0,1300,450);
                                y+=20;
                                blit(psd1,screen,0,0,x+j,y-20,38,54);
                                rest(120);

                                blit(buffer, screen,0,0,0,0,1300,450);
                            }

          }
         else{
                                if(key[KEY_RIGHT]) j+=25;

                                blit(buffer, screen,0,0,0,0,1300,450);
                                y+=20;
                                blit(psd1,screen,0,0,x+j,y-20,38,54);
                                rest(120);

                                blit(buffer, screen,0,0,0,0,1300,450);
                            }
        }

        x=x+j;
        y=345;
        }
    void saltarI(){
        blit(buffer,screen, 0, 0, 0, 0, 1300, 450);
        int j=0;
        if(key[KEY_UP]){
            if(key[KEY_LEFT]) j-=25;

            blit(psi1, screen,0,0,x+j,y-20,38,54);
            rest(120);
            blit(buffer, screen,0,0,0,0,1300,450);
            if(key[KEY_UP])
            {
                if(key[KEY_LEFT]) j-=25;
                y-=20;
                blit(psi2, screen,0,0,x+j,y-20,38,54);
                rest(120);
                blit(buffer, screen,0,0,0,0,1300,450);
                if(key[KEY_UP]){
                    if(key[KEY_LEFT]) j-=25;
                    y-=20;
                    blit(psi3, screen,0,0,x+j,y-20,38,54);
                    rest(120);
                    blit(buffer, screen,0,0,0,0,1300,450);
                    if(key[KEY_UP]){
                        if(key[KEY_LEFT]) j-=25;
                        y-=20;
                        blit(psi4, screen,0,0,x+j,y-20,38,54);
                        rest(120);
                        blit(buffer, screen,0,0,0,0,1300,450);
                        if(key[KEY_UP]){
                            if(key[KEY_LEFT]) j-=25;
                            y+=20;
                            blit(psi5, screen,0,0,x+j,y-20,38,54);
                            rest(120);
                            blit(buffer, screen,0,0,0,0,1300,450);
                            if(key[KEY_UP]){
                                if(key[KEY_LEFT]) j-=25;
                                y+=20;
                                blit(psi6, screen,0,0,x+j,y-20,38,54);
                                rest(120);
                                blit(buffer, screen,0,0,0,0,1300,450);
                            }
                            else{
                                if(key[KEY_LEFT]) j-=25;
                                blit(buffer, screen,0,0,0,0,1300,450);
                                y+=20;
                                blit(psi3,screen,0,0,x+j,y-20,38,54);
                                rest(120);

                                blit(buffer, screen,0,0,0,0,1300,450);
                                y+=20;
                                blit(psi2,screen,0,0,x+j,y-20,38,54);
                                rest(120);

                                blit(buffer, screen,0,0,0,0,1300,450);
                                y+=20;
                                blit(psi1,screen,0,0,x+j,y-20,38,54);
                                rest(120);

                                blit(buffer, screen,0,0,0,0,1300,450);
                            }
                        }
                        else{
                                if(key[KEY_LEFT]) j+=25;
                                blit(buffer, screen,0,0,0,0,1300,450);
                                y+=20;
                                blit(psi3,screen,0,0,x+j,y-20,38,54);
                                rest(120);

                                blit(buffer, screen,0,0,0,0,1300,450);
                                y+=20;
                                blit(psi2,screen,0,0,x+j,y-20,38,54);
                                rest(120);

                                blit(buffer, screen,0,0,0,0,1300,450);
                                blit(psi1,screen,0,0,x+j,y-20,38,54);
                                rest(120);

                                blit(buffer, screen,0,0,0,0,1300,450);
                            }
                    }
                else{
                                if(key[KEY_LEFT]) j+=25;

                                blit(buffer, screen,0,0,0,0,1300,450);
                                y+=20;
                                blit(psi2,screen,0,0,x+j,y-20,38,54);
                                rest(120);

                                blit(buffer, screen,0,0,0,0,1300,450);
                                blit(psi1,screen,0,0,x+j,y-20,38,54);
                                rest(120);

                                blit(buffer, screen,0,0,0,0,1300,450);
                            }
                }
                else{
                                if(key[KEY_LEFT]) j+=25;

                                blit(buffer, screen,0,0,0,0,1300,450);
                                y+=20;
                                blit(psi1,screen,0,0,x+j,y-20,38,54);
                                rest(120);

                                blit(buffer, screen,0,0,0,0,1300,450);
                            }

          }
         else{
                                if(key[KEY_LEFT]) j+=25;

                                blit(buffer, screen,0,0,0,0,1300,450);
                                y+=20;
                                blit(psi1,screen,0,0,x+j,y-20,38,54);
                                rest(120);

                                blit(buffer, screen,0,0,0,0,1300,450);
                            }
        }

        x=x+j;
        y=345;
        }
};

int main ()
{
    allegro_init();
    install_keyboard();

    set_color_depth(32);
    set_gfx_mode(GFX_AUTODETECT_WINDOWED, 1300,450,0,0);

    muneco p1;

    buffer=create_bitmap(1300,450);
    pd=load_bitmap("C:\\Users\\Omar Z\\Documents\\GitHub\\Combate-Mortal\\Personajes\\LARA\\PD.bmp", NULL);
    pi=load_bitmap("C:\\Users\\Omar Z\\Documents\\GitHub\\Combate-Mortal\\Personajes\\LARA\\PI.bmp", NULL);
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

    }
    return 0;
}
END_OF_MAIN ()


