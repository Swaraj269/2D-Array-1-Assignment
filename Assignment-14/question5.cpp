// Q5: Write a program to print the row number having the maximum sum in a given matrix.


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
    int max = 0;
    int index = 0;
    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=0; j<m; j++){
            sum += arr[i][j];
        }
        if(sum > max){
            max = sum;
            index = i;
        }
    }
    cout<< "Max sum in the index: "<<index<<endl;
    return 0;
}