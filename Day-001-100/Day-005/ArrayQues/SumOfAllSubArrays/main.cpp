/* Given an array a[] of size n. Output sum of each subarrray of the given array.
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size : ";
    cin>>n;
    int a[n];
    cout<<"Enter elements in array : ";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
        for(int i=0; i<n; i++){
            int sum =0;
            for(int j=i; j<n; j++){
                sum = sum + a[j];
                cout<<sum<<" ";
            }
        }
        return 0;
}