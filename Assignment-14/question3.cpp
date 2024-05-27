// Q3: Given a matrix ‘A’ of dimension n x m and 2 coordinates (l1, r1) and (l2, r2). Return the sum of the
// rectangle from (l1,r1) to (l2, r2).


#include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter the number of rows: ";
    cin >> n;
    int m;
    cout<< "Enter the number of columns: ";
    cin >> m;
    int a[n][m];
    cout<< "Enter the elements: " << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
    int l1, r1, l2, r2;
    cout<< "Enter the coordinates: ";
    cin >> l1 >> r1 >> l2 >> r2;
    int sum = 0;
    for(int i=min(l1,l2); i<=max(l1,l2); i++){
        for(int j=min(r1,r2); j<=max(r1,r2); j++){
            sum += a[i][j];
        }
    }
    cout<< "Sum: "<<sum<<endl;
    return 0;
}