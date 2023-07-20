#include <iostream>
#include <ctime>
#include <ncurses.h>
#include <string>


int main() {
    // Obtiene la fecha y hora actual del sistema
    std::time_t now = std::time(0);
    std::tm* time_info = std::localtime(&now);

    // El mes se encuentra en el campo tm_mon de la estructura tm.
    // Se suma 1 ya que los valores van de 0 a 11 (enero es 0, diciembre es 11).
    int month_memory;
    int month_selected;
    int flag=1;
    int character;
    int month=month_memory = time_info->tm_mon + 1;
    // interrumpe el ciclo para reprogemar
    bool play = true;
    //establece el estado de la lamapara
    bool lith_status= true;
    bool first_star= true;
    std::string meses[] = {
        "enero", "febrero", "marzo", "abril", "mayo", "junio",
        "julio", "agosto", "septiembre", "octubre", "noviembre", "diciembre"
    };
    // Imprime el resultado
    std::cout << "Estamos en el mes " << month << " del año." << std::endl;
    //int day = time_info->tm_mday;
    //std::cout << "Estamos en el dia " << day;

    //iniciar ncurses para detectar la teclas
    initscr();            // Inicializar ncurses
    cbreak();             // Deshabilitar el búfer de línea (leer teclas sin esperar nueva línea)
    noecho();             // No mostrar las teclas presionadas en la pantalla
    keypad(stdscr, true); // Habilitar lectura de teclas especiales

    while (true)
    {
        printw("Seleccione el mes, para guardar los cambios precione la tecla 's'");
        while ((character = getch()) != 's') { // Salir del bucle si se presiona 'q'
            if (character >= 1 && character <= 12) {
           // Restamos 1 al número ingresado porque los arrays en C++ son 0-indexados
                int indiceMes = character - 1;
            // Mostrar el mes seleccionado
                printw("El mes seleccionado es %s\n", meses[indiceMes].c_str());
            } else {
                std::cout << "Número de mes inválido. Debe estar entre 1 y 12." << std::endl;
            }

            refresh();
        }
        while ((character = getch()) != 'q')
        {
            if (month_memory!=month&&flag<3){
                flag++;
                lith_status= false;
                month_memory=month;
            }
            else if (month_memory!=month&&flag==3){
                flag=0;
                lith_status= true;
                month_memory=month;
            }
            else {
                lith_status= true;
                std::cout<<"Error";
            }
        }
        endwin(); // Restaurar la configuración original de la terminal
    }
    return 0;
}