#include <iostream>
#include <ncurses.h>

int main() {
    initscr();            // Inicializar ncurses
    cbreak();             // Deshabilitar el búfer de línea (leer teclas sin esperar nueva línea)
    noecho();             // No mostrar las teclas presionadas en la pantalla
    keypad(stdscr, true); // Habilitar lectura de teclas especiales

    printw("Presiona 'd' para detectar si fue presionada. Presiona 'q' para salir.\n");
    refresh();

    int ch;
    while ((ch = getch()) != 'q') { // Salir del bucle si se presiona 'q'
        if (ch == '1') {
            printw("Enero\n");
        } else if (ch== '2'){
            printw("Febrero\n");
        }
        refresh();
    }

    endwin(); // Restaurar la configuración original de la terminal

    return 0;
}