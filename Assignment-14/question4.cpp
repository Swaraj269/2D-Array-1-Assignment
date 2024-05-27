// Q4: Write a C++ program to find the largest element of a given 2D array of integers.


#include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter the number of rows: ";
    cin >> n;
    int m;
    cout<< "Enter the number of columns: ";
    cin >> m;
    int arr[n][m];
    cout<< "Enter the elements: " << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }
    int max = arr[0][0];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]>max){
                max = arr[i][j];
            }
        }
    }
    cout<< "Max: "<<max<<endl;
    return 0;
}