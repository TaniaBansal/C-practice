/* Finding the maximun and minimum element in array
*/


#include<climits>
#include<iostream>
using namespace std;


int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements in array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int maxNo = INT_MIN;
    int minNo = INT_MAX;

    for(int i=0; i<n; i++){
       maxNo = max(maxNo, arr[i]);
       minNo = min(minNo, arr[i]);
    }
    
    cout<<"Maximum no is : "<<maxNo<<endl;
    cout<<"Minimum no is : "<<minNo<<endl;
    return 0;
}