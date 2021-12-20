/* WAP to print sum of two matrices
*/

#include<iostream>
using namespace std;

int main(){
    int n, m;
    cout<<"Enter values : ";
    cin>>n>>m;
    int a[n][m], b[n][m], c[n][m], i, j, rows, col;
    cout<<"Enter no of rows and columns : ";
    cin>>rows>>col;
    cout<<"Enter elements in first matrix : ";
    for(i=0; i<rows; i++){
        for(j=0; j<col; j++){
            cin>> a[i][j];
        }
    }

    cout<<"Enter elements in second matrix : ";
    for(i=0; i<rows; i++){
        for(j=0; j<col; j++){
            cin>>b[i][j];
        }
    }

    for(i=0; i<rows; i++){
        for(j=0; j<col; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    cout<<"Sum of two matrices is : ";
    for(i=0; i<rows; i++){
        for(j=0; j<col; j++){
            cout<<c[i][j]<<" ";
        }
    }
    return 0;
}