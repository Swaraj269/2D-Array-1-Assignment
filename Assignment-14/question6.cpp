// Q6: Write a function which accepts a 2D array of integers and its size as arguments and displays the
// elements of middle row and the elements of middle column.
// [Assuming the 2D Array to be a square matrix with odd dimensions i.e. 3x3, 5x5, 7x7 etc...]

#include <iostream>
#include <vector>
using namespace std;


void middlerow(vector<vector<int>>v, int r, int c){
    for(int i=0; i<=r-1; i++){
        for(int j = 0; j<=c-1; j++){
            if(i==((r/2)) || j==((c/2)) ){
                cout << v[i][j] << " ";
            }
            else{
                cout<< " "<< " ";
            }
        }
        cout << endl;
    }
}
int main(){
    int n;
    cout<< "Enter the number of rows: ";
    cin >> n;
    int m;
    cout<< "Enter the number of columns: ";
    cin >> m;
     vector<vector<int>> arr(n, vector<int>(m));
    cout<< "Enter the elements: " << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>> arr[i][j];
        }
    }
    middlerow(arr,n,m);
    return 0;
}