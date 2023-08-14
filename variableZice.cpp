#include <iostream>
#include <string>

using namespace std;

int main() {
	// Complete the program
    string string_catch1, string_catch2;
    char first_leter_s1,first_leter_s2;
    cin >> string_catch1>>string_catch2;
    first_leter_s1 = string_catch1[0];
    first_leter_s2 = string_catch2[0];
    cout <<string_catch1.size() <<" "<< string_catch2.size()<<endl;
    cout << string_catch1<< string_catch2<<endl;
    string_catch1[0]=first_leter_s2;
    string_catch2[0]=first_leter_s1;
    cout << string_catch1<<" "<< string_catch2<<endl;    
    return 0;
}