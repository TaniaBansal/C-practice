/* WAP to insert an element at specific position
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int pos;
    cout<<"Enter position : ";
    cin>>pos;
    int data;
    cout<<"Enter element you want to insert : ";
    cin>>data;
    for(int i= n-1; i>= pos-1; i--){
        arr[i+1] = arr[i];
    }
    arr[pos-1] = data;
    n++;

    cout<<"Elements in array are : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}