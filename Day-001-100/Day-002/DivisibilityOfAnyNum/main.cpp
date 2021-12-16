// Program to check divisibility of any number 

#include<iostream>

using namespace std;

int main(){
    int num1, num2;
    cout<<"Enter value of num1 and num2 : ";
    cin>>num1>>num2;
    if(num1%num2 == 0){
        cout<<"Number is divisible";
    }
    else{
        cout<<"Number not divisible";
    }
    return 0;
}