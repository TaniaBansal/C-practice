/* WAP to print prime number between two numbers using a function
*/

#include<iostream>
using namespace std;

bool isPrime(int);
int main(){
    int a, b, num;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    for(num=a; num<=b; num++){
        if(isPrime(num)){
            cout<<num<<" ";
        }
    }
    return 0;
}

bool isPrime(int n){
    int i;
    for(i=2; i<n; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}
