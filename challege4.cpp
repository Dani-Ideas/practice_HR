#include <iostream>
#include <cstdio>
using namespace std;

#include <string>

std::string numberToText(int number) {
    std::string numbers[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    if (number >= 1 && number <= 9) 
        return numbers[number];
    else if (number%2)
        return "odd";
    else
        return "even"; 

}

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    for (int i= num1; i<1+num2;i++){
        cout << numberToText(i)<<"\n"; 
    }  
    return 0;
}