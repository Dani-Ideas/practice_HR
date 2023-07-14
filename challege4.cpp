#include <iostream>
#include <cstdio>
using namespace std;

#include <string>

std::string numberToText(int number) {
    std::string numbers[] = {
        "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
        "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen",
        "twenty", "twenty-one", "twenty-two", "twenty-three", "twenty-four", "twenty-five", "twenty-six", "twenty-seven", "twenty-eight", "twenty-nine",
        "thirty", "thirty-one", "thirty-two", "thirty-three", "thirty-four", "thirty-five", "thirty-six", "thirty-seven", "thirty-eight", "thirty-nine",
        "forty", "forty-one", "forty-two", "forty-three", "forty-four", "forty-five", "forty-six", "forty-seven", "forty-eight", "forty-nine", "fifty"
    };

    if (number >= 0 && number <= 50) {
        return numbers[number];
    }

    return "Number out of range";
}

int main() {
    int num1, num2;
    cin >> num1;
    cin >> num2;
    for (int num_print= num1; num_print<num2;num_print++){
        cout << numberToText(num_print)<<"\n";
    }
    if (num2%2)
        cout << "even";
    else
        cout << "odd";    
    return 0;
}