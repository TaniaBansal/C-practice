/* WAP to print Fibonacci Series
*/

#include<iostream>
using namespace std;

void fib(int);
int main(){
    int n;
    cout<<"Enter value of n : ";
    cin>>n;
    fib(n);
    return 0;
}

void fib(int num){
    int a= 0, b=1, sum=0;
    for(int i=1; i<=num; i++){
        cout<<a<<" ";
        sum = a+b;
        a = b;
        b = sum;
    }
    return;
}