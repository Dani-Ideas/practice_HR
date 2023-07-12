#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int number;
    long number2;
    char letter;
    float number3;
    double number4;
    scanf("%d %ld %c %f %lf",&number,&number2,&letter,&number3,&number4);
    printf("%d \n%ld \n%c \n%.3f \n%.9lf",number,number2,letter,number3,number4);
    return 0;
}