/*Given a positive integer , do the following:

If , print the lowercase English word corresponding to the number (e.g., one for , two for , etc.).
If , print Greater than 9.
Input Format

A single integer, .

Constraints

Output Format

If , then print the lowercase English word corresponding to the number (e.g., one for , two for , etc.); otherwise, print Greater than 9.

Sample Input 0

5
Sample Output 0

five
Explanation 0

five is the English word for the number .

Sample Input 1

8
Sample Output 1

eight
Explanation 1

eight is the English word for the number .

Sample Input 2

44
Sample Output 2

Greater than 9
Explanation 2

 is greater than , so we print Greater than 9.*/
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

string check_number(int n){
    string s_number;
    if(n==1)
        return "one";
    else if(n==2)
        return "two";
    else if(n==3)
        return "three";
    else if(n==4)
        return "four";
    else if(n==5)
        return "five";
    else if(n==6)
        return "six";
    else if(n==7)
        return "seven";
    else if(n==8)
        return "eight";
    else if(n==9)
        return "nine";
    else
        return "Greater than 9";
}    

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    cout<< check_number(n);

    return 0;
}


    

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
