#include <iostream>
#include <string>

using namespace std;

int main(){

    char text[50];
    // en este ejemplo solo capta hasta encontrar con un espacio
    std:: cout << "ingrese el texto: "; 
    cin>>text;
    cout<<text;
    //en este ejemplo va a para de captar hasta apretar el 'ENTER'
    std::string entrada;

    std::cout << "Ingrese un texto: ";
    std::getline(std::cin, entrada);

    std::cout << "Texto ingresado: " << entrada << std::endl;

    return 0;
}