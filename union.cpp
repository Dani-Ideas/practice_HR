#include <iostream>
#include <string>

using namespace std;

union number_letter {
        int number;
        char letter;
    };

void show_me_the_data(const number_letter& data){
    
    cout << "Casting de letra a hexademal: "<< (hex)<<data.letter<<endl;
    cout << "Casting de numero a hexademal: "<< (hex)<<data.number<<endl;
}

int main(){
    
    number_letter x = {'a'};
    number_letter experimet={255};
    number_letter mkULTRA={98};

    cout << "numero: "<< x.number<<endl;

    show_me_the_data(experimet);
    show_me_the_data(mkULTRA);
}