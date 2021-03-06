/* WAP to find two unique numbers in an array where all numbers except two are present twice
*/

#include<iostream>
using namespace std;

int setBit(int n, int pos){
    return((n & (1<<pos)) !=0);
}

void uniqueNo(int arr[], int n){
    int xorsum =0;
    for(int i=0; i<n; i++){
        xorsum = xorsum^arr[i];
    }
    int tempxor = xorsum;
    int setbit=0;
    int pos=0;
    while(setbit != 1){
        setbit = xorsum & 1;
        pos++;
        xorsum = xorsum>>1;
    }

    int newxor = 0;
    for(int i=0; i<n; i++){
        if(setBit(arr[i], pos-1)){
            newxor= newxor^arr[i];
        }
    }
    cout<<newxor<<endl;
    int secondNo = tempxor^newxor;
    cout<<secondNo<<endl;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    uniqueNo(arr, n);
    return 0;
}