/* Sieve of Eratosthenenes - To print all prime numbers in a given range
*/

#include<iostream>
using namespace std;

void primeSieve(int n){
    int arr[n];
    for(int i=1; i<=n; i++){
        arr[i] =0;
    }

    for(int i=2; i<=n; i++){
        if(arr[i] == 0){
            for(int j = i*i; j<=n; j+=i){
                arr[j] = 1;
            }
        }
    }

    for(int i=2; i<=n; i++){
        if(arr[i] == 0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    primeSieve(n);
    return 0;
}