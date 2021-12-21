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
    int key;
    cout<<"Enter element you want to search : ";
    cin>>key;
    for(int i=0; i<n; i++){
        if(arr[i] == key){
            cout<<"Element is found at index : "<<i<<endl;
        }
    }
    return 0;
}
