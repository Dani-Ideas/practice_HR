/*Task
Read  numbers from stdin and print their sum to stdout.

Input Format

One line that contains  space-separated integers: , , and .

Constraints

Output Format

Print the sum of the three numbers on a single line.

Sample Input

1 2 7
Sample Output

10
Explanation

The sum of the three numbers is .*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int num1,num2,num3;
    cin >>num1>>num2>>num3;
    cout <<(num1+num2+num3);
    
    return 0;
}
