/* Given an array a[] of size n. For every i from 0 to n-1 output max(a[0], a[1],..., a[i]).
*/

#include<climits>
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

    int maxNo = INT_MIN;
    for(int i=0; i<n; i++){
         maxNo = max(maxNo, arr[i]);
         cout<<maxNo<<" ";
    }
    return 0;
}