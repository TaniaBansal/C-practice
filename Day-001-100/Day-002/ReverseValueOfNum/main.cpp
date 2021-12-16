// Program to print reverse of a number

#include<iostream>

using namespace std;

int main(){
    int num, sum=0;
    cout<<"Enter number : ";
    cin>>num;
    while(num>0){
    int rem = num%10;
    sum = sum*10 + rem;
    num = num/10;
    }
    cout<<"Reversed number is : "<<sum;
    return 0;
}