#include <iostream>

int main() {
    // Pedir al usuario el tamaño de filas y columnas de la matriz
    int filas, columnas;
    std::cout << "Ingrese el número de filas: ";
    std::cin >> filas;
    std::cout << "Ingrese el número de columnas: ";
    std::cin >> columnas;

    // Crear un puntero doble para almacenar las filas de la matriz
    int** matriz = new int*[filas];

    // Crear dinámicamente las columnas para cada fila
    for (int i = 0; i < filas; ++i) {
        matriz[i] = new int[columnas];
    }

    // Inicializar la matriz con algunos valores (este paso es opcional)
    int contador = 1;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            matriz[i][j] = contador++;
        }
    }

    // Mostrar la matriz
    std::cout << "Matriz:" << std::endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Liberar la memoria de las columnas
    for (int i = 0; i < filas; ++i) {
        delete[] matriz[i];
    }

    // Liberar la memoria de las filas
    delete[] matriz;

    return 0;
}