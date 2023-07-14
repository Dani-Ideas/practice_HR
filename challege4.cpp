#include <iostream>
#include <cstdio>
using namespace std;

#include <string>

std::string numberToText(int number) {
    std::string numbers[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    if (number >= 1 && number <= 9) 
        return numbers[number];
    else if (number%2)
        cout << "even";
    else
        cout << "odd"; 

    return "Number out of range";
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    for (int num_print= num1; num_print<num2;num_print++){
        cout << numberToText(num_print)<<"\n"; 
    }  
    return 0;
}