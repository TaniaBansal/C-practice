/* Inserting an element at the end of array
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
    
    int data;
    cout<<"Enter data : ";
    cin>>data;
    arr[n] = data;
    n++;

    cout<<"Elements in array are : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}