#include <iostream>
#include <string>

using namespace std;

struct Person
{
    string name;
    int age;
};


int main(){
    /*
    La primera declaracion de persons pide memoria en el mometo de la ser compilado
    */
    Person juanchito = Person();
    juanchito.name="Juan";
    juanchito.age= 15;
    /*
    En esta segunda declaracion hacae la solicitud de la memoria al mometo de ser ejecutado
    */
    Person *diana= new Person();
    diana->name="Diana";
    diana->age=28;
    // mostrar los datos 
    cout<<juanchito.name<<endl;
    cout<<juanchito.age<<endl;
    cout<<diana->name<<endl;
    cout<<diana->age<<endl;
    
    return 0;
}