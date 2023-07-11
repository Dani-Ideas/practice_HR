#include <iostream>
using namespace std;

int i_sum (int a, int b){

    return a+b;
}

int main (){
    int number1, number2;
    scanf("%d\n%d",&number1,&number2);
    cout << i_sum(number1,number2);
}