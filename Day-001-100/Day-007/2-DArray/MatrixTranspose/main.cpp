/* Given a square matrix a and its no of rows (or columns), N, return the transpose of A.
The transpose of a matrix is the matrix flipped over it's main diagonal, switching the row and column indices of the matrix.

Constraints: 1<= N <= 1000
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size : ";
    cin>>n;
    int a[n][n];
    cout<<"Enter elements : ";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }

    cout<<"Transpose of matrix is : ";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}