// Q1: Write a program to store 10 at every index of a 2D matrix with 5 rows and 5 columns.

#include <iostream>
using namespace std;
int main(){
    int a[5][5];
    for(int i=0; i<=4; i++){
        for(int j = 0; j<=4; j++){
            a[i][j] = 10;
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}