/* You are given an array of size n. Print all the possible subarrays
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

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            for(int k=i; k<=j; k++){
                cout<<arr[k]<<" ";
            }
             cout<<endl;
        }
    }
    return 0;
}