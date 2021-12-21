/*  Deletion from specific position
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements in array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int pos;
    cout<<"Enter position : ";
    cin>>pos;

    for(int i= pos-1; i<n-1; i++){
        arr[i] = arr[i+1];
    }
    n--;
    cout<<"Elements in array are : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}    