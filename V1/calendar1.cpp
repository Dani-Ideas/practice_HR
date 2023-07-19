#include <iostream>
#include <ctime>


int main() {
    // Obtiene la fecha y hora actual del sistema
    std::time_t now = std::time(0);
    std::tm* time_info = std::localtime(&now);

    // El mes se encuentra en el campo tm_mon de la estructura tm.
    // Se suma 1 ya que los valores van de 0 a 11 (enero es 0, diciembre es 11).
    int month_memory;
    int month=month_memory = time_info->tm_mon + 1;
    //int day = time_info->tm_mday;
    // interrumpe el ciclo para reprogemar
    bool play = true;
    //establece el estado de la lamapara
    bool lith_status= true;
    // Imprime el resultado
    std::cout << "Estamos en el mes " << month << " del año." << std::endl;
    std::cout << "Estamos en el dia " << day;

    while (true)
    {

        while (play&&lith_status)
        {
            
        }
        
    }
    


    return 0;
}