#include <allegro.h> // Incluimos la biblioteca allegro

int x = 50; // Utilizaremos la variable entero x para manejar la posici�n del "monigote" sobre el eje X del BITMAP donde nos "moveremos", la inicializamos a 50
int y = 50; // Utilizaremos la variable entero y para manejar la posici�n del "monigote" sobre el eje Y del BITMAP donde nos "moveremos", la inicializamos a 50
BITMAP* monigote; // Declaramos el BITMAP monigote donde cargaremos la imagen de nuestro protagonista
PALETTE paleta; // Declaramos el PALETTE paleta la cual administrar� los colores de la imagen que carguemos

int main(){
allegro_init(); // Macro que inicia la biblioteca Allegro
install_keyboard(); // Instala el controlador de intrucciones de teclado Allegro, ya no podemos usar llamadas al sistema ni funciones de librer�a de C para acceder al teclado hasta que no lo desinstalemos de nuevo
set_gfx_mode(GFX_AUTODETECT_WINDOWED, 640, 480, 0 ,0); // Cambia a modo gr�fico indicando el tama�o de �ste y el m�nimo permitido. 640 x 480 es el m�ximo de pantalla visible, de ah� a 1024 x 1024 es el m�ximo de memoria de v�deo
bmp = load_bitmap("direcci�n del monigote".bmp", paleta); //cargarmos en nuestro puntero monigote una imagen predise�ada en formato .bmp que hayamos creado, utiliza la configuraci�n de colores de la paletta

while( !key[KEY_ESC]) {
clear_keybuf(); // Borra el buffer del teclado
acquire_screen(); // Bloquea screen antes de dibujar en �l, screen es el BITMAP por donde nos moveremos
clear(screen); // Borramos screen despues de movernos para dar la impresi�n de desplazamiento
if(key[KEY_UP]) y-=10;
else if (key[KEY_LEFT]) x-=10;
else if (key[KEY_RIGHT]) x+=10;
else if (key[KEY_DOWN]) y+=10;
blit(monigote, screen, 0, 0, x, y, 100, 100); // Dibujamos el BITMAP en el BITMAP destino (screen en este caso) y pasamos los valores del tama�o
release_screen(); // Libera el BITMAP bloqueado
rest(50);
} // Mientras no pulsemos la tecla ESC seguir� ejecut�ndose el while, vamos cambiando los valores de x e y seg�n la tecla que pulsemos(UP, LEFT, RIGHT, DOWN)
}
END_OF_MAIN();
