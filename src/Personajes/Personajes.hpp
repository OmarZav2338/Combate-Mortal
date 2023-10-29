#include <allegro.h>
#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int pos=1;
int x=60, y=345;

BITMAP *buffer;
BITMAP *pd;
BITMAP *pi;

class muneco{

private:
    //Movimiento del personaje hacia la derecha
    BITMAP *pd1 = load_bitmap("src\\Personajes\\LARA\\Caminata\\Derecha\\Caminar1.bmp", NULL);
    BITMAP *pd2 = load_bitmap("src\\Personajes\\LARA\\Caminata\\Derecha\\Caminar2.bmp", NULL);
    BITMAP *pd3 = load_bitmap("src\\Personajes\\LARA\\Caminata\\Derecha\\Caminar3.bmp", NULL);
    BITMAP *pd4 = load_bitmap("src\\Personajes\\LARA\\Caminata\\Derecha\\Caminar4.bmp", NULL);
    BITMAP *pd5 = load_bitmap("src\\Personajes\\LARA\\Caminata\\Derecha\\Caminar5.bmp", NULL);
    BITMAP *pd6 = load_bitmap("src\\Personajes\\LARA\\Caminata\\Derecha\\Caminar6.bmp", NULL);

    //Movimiento del personaje hacia la izquierda
    BITMAP *pi1 = load_bitmap("src\\Personajes\\LARA\\Caminata\\Izquierda\\Caminar1.bmp", NULL);
    BITMAP *pi2 = load_bitmap("src\\Personajes\\LARA\\Caminata\\Izquierda\\Caminar2.bmp", NULL);
    BITMAP *pi3 = load_bitmap("src\\Personajes\\LARA\\Caminata\\Izquierda\\Caminar3.bmp", NULL);
    BITMAP *pi4 = load_bitmap("src\\Personajes\\LARA\\Caminata\\Izquierda\\Caminar4.bmp", NULL);
    BITMAP *pi5 = load_bitmap("src\\Personajes\\LARA\\Caminata\\Izquierda\\Caminar5.bmp", NULL);
    BITMAP *pi6 = load_bitmap("src\\Personajes\\LARA\\Caminata\\Izquierda\\Caminar6.bmp", NULL);

    //Movimiento del personaje con salto hacia la derecha
    BITMAP *psd1 = load_bitmap("src\\Personajes\\LARA\\Salto\\Derecha\\Salto0.bmp", NULL);
    BITMAP *psd2 = load_bitmap("src\\Personajes\\LARA\\Salto\\Derecha\\Salto1.bmp", NULL);
    BITMAP *psd3 = load_bitmap("src\\Personajes\\LARA\\Salto\\Derecha\\Salto2.bmp", NULL);
    BITMAP *psd4 = load_bitmap("src\\Personajes\\LARA\\Salto\\Derecha\\Salto3.bmp", NULL);
    BITMAP *psd5 = load_bitmap("src\\Personajes\\LARA\\Salto\\Derecha\\Salto4.bmp", NULL);
    BITMAP *psd6 = load_bitmap("src\\Personajes\\LARA\\Salto\\Derecha\\Salto5.bmp", NULL);

    //Movimiento del personaje con salto hacia la izquierda
    BITMAP *psi1 = load_bitmap("src\\Personajes\\LARA\\Salto\\Izquierda\\Salto0.bmp", NULL);
    BITMAP *psi2 = load_bitmap("src\\Personajes\\LARA\\Salto\\Izquierda\\Salto1.bmp", NULL);
    BITMAP *psi3 = load_bitmap("src\\Personajes\\LARA\\Salto\\Izquierda\\Salto2.bmp", NULL);
    BITMAP *psi4 = load_bitmap("src\\Personajes\\LARA\\Salto\\Izquierda\\Salto3.bmp", NULL);
    BITMAP *psi5 = load_bitmap("src\\Personajes\\LARA\\Salto\\Izquierda\\Salto4.bmp", NULL);
    BITMAP *psi6 = load_bitmap("src\\Personajes\\LARA\\Salto\\Izquierda\\Salto5.bmp", NULL);

    //Ataque1 Derecha
    BITMAP *pad1 = load_bitmap("src\\Personajes\\LARA\\Ataque1\\Derecha\\LA11.bmp", NULL);
    BITMAP *pad2 = load_bitmap("src\\Personajes\\LARA\\Ataque1\\Derecha\\LA12.bmp", NULL);
    BITMAP *pad3 = load_bitmap("src\\Personajes\\LARA\\Ataque1\\Derecha\\LA13.bmp", NULL);
    BITMAP *pad4 = load_bitmap("src\\Personajes\\LARA\\Ataque1\\Derecha\\LA14.bmp", NULL);
    BITMAP *pad5 = load_bitmap("src\\Personajes\\LARA\\Ataque1\\Derecha\\LA15.bmp", NULL);
    BITMAP *pad6 = load_bitmap("src\\Personajes\\LARA\\Ataque1\\Derecha\\LA16.bmp", NULL);

    //Ataque1 Izquierda
    BITMAP *pai1 = load_bitmap("src\\Personajes\\LARA\\Ataque1\\Izquierda\\LA11.bmp", NULL);
    BITMAP *pai2 = load_bitmap("src\\Personajes\\LARA\\Ataque1\\Izquierda\\LA12.bmp", NULL);
    BITMAP *pai3 = load_bitmap("src\\Personajes\\LARA\\Ataque1\\Izquierda\\LA13.bmp", NULL);
    BITMAP *pai4 = load_bitmap("src\\Personajes\\LARA\\Ataque1\\Izquierda\\LA14.bmp", NULL);
    BITMAP *pai5 = load_bitmap("src\\Personajes\\LARA\\Ataque1\\Izquierda\\LA15.bmp", NULL);
    BITMAP *pai6 = load_bitmap("src\\Personajes\\LARA\\Ataque1\\Izquierda\\LA16.bmp", NULL);

    //Ataque2 Derecha
    BITMAP *pbd1 = load_bitmap("src\\Personajes\\LARA\\Ataque2\\Derecha\\LA21.bmp", NULL);
    BITMAP *pbd2 = load_bitmap("src\\Personajes\\LARA\\Ataque2\\Derecha\\LA22.bmp", NULL);
    BITMAP *pbd3 = load_bitmap("src\\Personajes\\LARA\\Ataque2\\Derecha\\LA23.bmp", NULL);
    BITMAP *pbd4 = load_bitmap("src\\Personajes\\LARA\\Ataque2\\Derecha\\LA24.bmp", NULL);
    BITMAP *pbd5 = load_bitmap("src\\Personajes\\LARA\\Ataque2\\Derecha\\LA25.bmp", NULL);
    BITMAP *pbd6 = load_bitmap("src\\Personajes\\LARA\\Ataque2\\Derecha\\LA26.bmp", NULL);

    //Ataque2 Izquierda
    BITMAP *pbi1 = load_bitmap("src\\Personajes\\LARA\\Ataque2\\Izquierda\\LA21.bmp", NULL);
    BITMAP *pbi2 = load_bitmap("src\\Personajes\\LARA\\Ataque2\\Izquierda\\LA22.bmp", NULL);
    BITMAP *pbi3 = load_bitmap("src\\Personajes\\LARA\\Ataque2\\Izquierda\\LA23.bmp", NULL);
    BITMAP *pbi4 = load_bitmap("src\\Personajes\\LARA\\Ataque2\\Izquierda\\LA24.bmp", NULL);
    BITMAP *pbi5 = load_bitmap("src\\Personajes\\LARA\\Ataque2\\Izquierda\\LA25.bmp", NULL);
    BITMAP *pbi6 = load_bitmap("src\\Personajes\\LARA\\Ataque2\\Izquierda\\LA26.bmp", NULL);

    //Ataque3 Derecha
    BITMAP *pcd1 = load_bitmap("src\\Personajes\\LARA\\Ataque3\\Derecha\\LA31.bmp", NULL);
    BITMAP *pcd2 = load_bitmap("src\\Personajes\\LARA\\Ataque3\\Derecha\\LA32.bmp", NULL);
    BITMAP *pcd3 = load_bitmap("src\\Personajes\\LARA\\Ataque3\\Derecha\\LA33.bmp", NULL);
    BITMAP *pcd4 = load_bitmap("src\\Personajes\\LARA\\Ataque3\\Derecha\\LA34.bmp", NULL);
    BITMAP *pcd5 = load_bitmap("src\\Personajes\\LARA\\Ataque3\\Derecha\\LA35.bmp", NULL);
    BITMAP *pcd6 = load_bitmap("src\\Personajes\\LARA\\Ataque3\\Derecha\\LA36.bmp", NULL);

    //Ataque3 Izquierda
    BITMAP *pci1 = load_bitmap("src\\Personajes\\LARA\\Ataque3\\Izquierda\\LA31.bmp", NULL);
    BITMAP *pci2 = load_bitmap("src\\Personajes\\LARA\\Ataque3\\Izquierda\\LA32.bmp", NULL);
    BITMAP *pci3 = load_bitmap("src\\Personajes\\LARA\\Ataque3\\Izquierda\\LA33.bmp", NULL);
    BITMAP *pci4 = load_bitmap("src\\Personajes\\LARA\\Ataque3\\Izquierda\\LA34.bmp", NULL);
    BITMAP *pci5 = load_bitmap("src\\Personajes\\LARA\\Ataque3\\Izquierda\\LA35.bmp", NULL);
    BITMAP *pci6 = load_bitmap("src\\Personajes\\LARA\\Ataque3\\Izquierda\\LA36.bmp", NULL);



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
    void ataque1(int pos){
        blit(buffer, screen,0,0,0,0,1300,450);
        switch(pos){
    case 1:
        blit(pad1,screen,0,0,x,y,38,54);
        rest(120);
        blit(buffer, screen,0,0,0,0,1300,450);

        x+=1;

        blit(pad2,screen,0,0,x,y,38,54);
        rest(120);
        blit(buffer, screen,0,0,0,0,1300,450);

        x+=1;

        blit(pad3,screen,0,0,x,y,38,54);
        rest(120);
        blit(buffer, screen,0,0,0,0,1300,450);

        x+=1;

        blit(pad4,screen,0,0,x,y,38,54);
        rest(120);
        blit(buffer, screen,0,0,0,0,1300,450);

        x+=1;

        blit(pad5,screen,0,0,x,y,38,54);
        rest(120);
        blit(buffer, screen,0,0,0,0,1300,450);

        x+=1;

        blit(pad6,screen,0,0,x,y,38,54);
        rest(120);
        blit(buffer, screen,0,0,0,0,1300,450);

        x+=1;
        break;

    case 2:
        blit(pai1,screen,0,0,x,y,38,54);
        rest(120);
        blit(buffer, screen,0,0,0,0,1300,450);

        x-=1;

        blit(pai2,screen,0,0,x,y,38,54);
        rest(120);
        blit(buffer, screen,0,0,0,0,1300,450);

        x-=1;

        blit(pai3,screen,0,0,x,y,38,54);
        rest(120);
        blit(buffer, screen,0,0,0,0,1300,450);

        x-=1;

        blit(pai4,screen,0,0,x,y,38,54);
        rest(120);
        blit(buffer, screen,0,0,0,0,1300,450);

        x-=1;

        blit(pai5,screen,0,0,x,y,38,54);
        rest(120);
        blit(buffer, screen,0,0,0,0,1300,450);

        x-=1;

        blit(pai6,screen,0,0,x,y,38,54);
        rest(120);
        blit(buffer, screen,0,0,0,0,1300,450);

        x-=1;
        break;
        }
    }
    void ataque2(int pos){
        blit(buffer, screen,0,0,0,0,1300,450);
        switch(pos){
    case 1:
        blit(pbd1,screen,0,0,x,y,38,54);
        rest(120);
        blit(buffer, screen,0,0,0,0,1300,450);

        x+=1;

        blit(pbd2,screen,0,0,x,y,38,54);
        rest(120);
        blit(buffer, screen,0,0,0,0,1300,450);

        x+=1;

        blit(pbd3,screen,0,0,x,y,38,54);
        rest(120);
        blit(buffer, screen,0,0,0,0,1300,450);

        x+=1;

        blit(pbd4,screen,0,0,x,y,38,54);
        rest(120);
        blit(buffer, screen,0,0,0,0,1300,450);

        x+=1;

        blit(pbd5,screen,0,0,x,y,38,54);
        rest(120);
        blit(buffer, screen,0,0,0,0,1300,450);

        x+=1;

        blit(pbd6,screen,0,0,x,y,38,54);
        rest(120);
        blit(buffer, screen,0,0,0,0,1300,450);

        x+=1;
        break;

    case 2:
        blit(pbi1,screen,0,0,x,y,38,54);
        rest(120);
        blit(buffer, screen,0,0,0,0,1300,450);

        x-=1;

        blit(pbi2,screen,0,0,x,y,38,54);
        rest(120);
        blit(buffer, screen,0,0,0,0,1300,450);

        x-=1;

        blit(pbi3,screen,0,0,x,y,38,54);
        rest(120);
        blit(buffer, screen,0,0,0,0,1300,450);

        x-=1;

        blit(pbi4,screen,0,0,x,y,38,54);
        rest(120);
        blit(buffer, screen,0,0,0,0,1300,450);

        x-=1;

        blit(pbi5,screen,0,0,x,y,38,54);
        rest(120);
        blit(buffer, screen,0,0,0,0,1300,450);

        x-=1;

        blit(pbi6,screen,0,0,x,y,38,54);
        rest(120);
        blit(buffer, screen,0,0,0,0,1300,450);

        x-=1;
        break;
        }
    }
    void ataque3(int pos){
        blit(buffer, screen,0,0,0,0,1300,450);
        switch(pos){
    case 1:
        blit(pcd1,screen,0,0,x,y,38,54);
        rest(120);
        blit(buffer, screen,0,0,0,0,1300,450);

        x+=1;

        blit(pcd2,screen,0,0,x,y,38,54);
        rest(120);
        blit(buffer, screen,0,0,0,0,1300,450);

        x+=1;

        blit(pcd3,screen,0,0,x,y,38,54);
        rest(120);
        blit(buffer, screen,0,0,0,0,1300,450);

        x+=1;

        blit(pcd4,screen,0,0,x,y,38,54);
        rest(120);
        blit(buffer, screen,0,0,0,0,1300,450);

        x+=1;

        blit(pcd5,screen,0,0,x,y,38,54);
        rest(120);
        blit(buffer, screen,0,0,0,0,1300,450);

        x+=1;

        blit(pcd6,screen,0,0,x,y,38,54);
        rest(120);
        blit(buffer, screen,0,0,0,0,1300,450);

        x+=1;
        break;

    case 2:
        blit(pci1,screen,0,0,x,y,38,54);
        rest(120);
        blit(buffer, screen,0,0,0,0,1300,450);

        x-=1;

        blit(pci2,screen,0,0,x,y,38,54);
        rest(120);
        blit(buffer, screen,0,0,0,0,1300,450);

        x-=1;

        blit(pci3,screen,0,0,x,y,38,54);
        rest(120);
        blit(buffer, screen,0,0,0,0,1300,450);

        x-=1;

        blit(pci4,screen,0,0,x,y,38,54);
        rest(120);
        blit(buffer, screen,0,0,0,0,1300,450);

        x-=1;

        blit(pci5,screen,0,0,x,y,38,54);
        rest(120);
        blit(buffer, screen,0,0,0,0,1300,450);

        x-=1;

        blit(pci6,screen,0,0,x,y,38,54);
        rest(120);
        blit(buffer, screen,0,0,0,0,1300,450);

        x-=1;
        break;
        }
    }
};


