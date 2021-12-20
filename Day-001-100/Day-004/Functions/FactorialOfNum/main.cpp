/* WAP to print factorial of a num
*/

#include<iostream>
using namespace std;

int factorial(int);
int main(){
    int num;
    cout<<"Enter num : ";
    cin>>num;
    int result = factorial(num);
    cout<<"Factorial of a number is : "<<result;
    return 0;
}

int factorial(int n){
    int fact = 1;
    for(int i=2; i<=n; i++){
        fact = fact*i;
    }
    return fact;
}