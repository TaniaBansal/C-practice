/*  WAP to calculate nCr
*/

#include<iostream>
using namespace std;

int factorial(int);
int main(){
    int n, r;
    cout<<"Enter values : ";
    cin>>n>>r;
    int result = factorial(n)/ (factorial(n-r) * factorial(r));
    cout<<"Result is : "<<result;
    return 0;
}

int factorial(int num){
    int fact =1;
    for(int i=2; i<=num; i++){
        fact = fact*i;
    }
    return fact;
}