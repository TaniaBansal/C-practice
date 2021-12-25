/* Find whether there exist 2 numbers that sum to K.
   we are solving this problem by two pointer approach. make sure array should be in sorted order.
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
    int k;
    cout<<"Enter sum : ";
    cin>>k;
    int st= 0;
    int en= n-1;
    while(st< en){
        if(arr[st] + arr[en] == k){
            cout<<st<<" "<<en;
            break;
        }
        else if(arr[st] + arr[en] > k){
            en--;
        }
        else{
            st++;
        }
    }
    if(st>en){
        cout<<"Elements doesnot exist"<<endl;
    }
    return 0;
}