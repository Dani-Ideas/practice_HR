#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,q;   
    cin>>n>>q;
    int** cath_array= new int *[n]();
    for (int i=0;i<n;i++){
        int k;
        cin>>k;
        int* sub_arr=new int[k]();
        for (int j; j<k; j++) {
            cin >> sub_arr[j];
        }
        cath_array[i]=sub_arr;
    }
    //show queries
    for (int o=0; o<q; o++) {
        int i,j;
        cin >> i>>j;
        cout<< cath_array[i][j]<<endl;
    }
    for (int i = 0; i < n; i++){
        delete [] cath_array[i];
    }
    delete [] cath_array;
    return 0;
}