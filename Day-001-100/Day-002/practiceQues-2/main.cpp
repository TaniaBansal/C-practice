/* WAP to check if a given number is prime or not */

#include<iostream>
using namespace std;

int main(){
    int num , i;
    cout<<"Enter a number : ";
    cin>>num;
    for(i=2; i<num; i++){
        if(num%i == 0){
            cout<<"Not a prime number";
            break;
        }
    }
    if(i == num){
        cout<<"Prime Number";
    }
    return 0;
}