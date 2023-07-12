#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    string n_temp,n_feed_back;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    n_feed_back=check_number(n);

    count<< n_feed_back;

    return 0;
}

string check_number(int n){
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
