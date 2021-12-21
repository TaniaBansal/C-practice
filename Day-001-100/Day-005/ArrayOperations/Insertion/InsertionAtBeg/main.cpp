/* Inserting an element at the beginning
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
    for(int i= n-1; i>=0; i--){
        arr[i+1] = arr[i];
    }
    arr[0] = data;
    n++;

    cout<<"Elements in array are : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}