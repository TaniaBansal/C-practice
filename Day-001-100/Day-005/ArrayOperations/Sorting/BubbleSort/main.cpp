/* Bubble sort - Repeatedly swap two adjacent elements if they are in wrong order.
if left no. > right no. = wrong order
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
    
    int counter = 1;          // for iterations
     while(counter < n){
         for(int i=0; i<n-counter; i++){
             if(arr[i+1] < arr[i]){
                 int temp = arr[i];
                 arr[i] = arr[i+1];
                 arr[i+1] = temp;
             }
         }
         counter++;
     }
     cout<<"Sorted array is : ";
     for(int i=0; i<n; i++){
         cout<<arr[i]<<" ";
     }
     return 0;
}

