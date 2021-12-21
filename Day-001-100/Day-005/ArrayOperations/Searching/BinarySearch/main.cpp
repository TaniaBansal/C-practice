/* Binary search - Condition is that all elements should be in sorted order
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
    
    int key;
    cout<<"Enter value of element you want to search : ";
    cin>>key;
    int start = 0;
    int last = n-1;
    while(start <= last){
        int mid = (start + last)/2;

        if(arr[mid] == key){
            cout<<"Number is found at index "<<mid<<endl;
            break;
        }
        else if(arr[mid] > key){
            last = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    if(start > last){
        cout<<"Element not found"<<endl;;
    }
    return 0;
}