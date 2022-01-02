/* Given a n*m matrix
Write an algorithm to find that the given value exists in the matrix or not. Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom
*/


#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter size : ";
    cin>>n>>m;
    int arr[n][m];
    cout<<"Enter elements : ";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    int key;
    cout<<"Enter number you want to search : ";
    cin>>key;
    int r=0, c=m-1;
    bool found = false;
    while(r<n && c>=0){
        if(arr[r][c] == key){
            found= true;
            break;
        }

        else if(arr[r][c] > key){
            c--;
        }
        else{
            r++;
        }
    }

    if(found){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
    return 0;
}