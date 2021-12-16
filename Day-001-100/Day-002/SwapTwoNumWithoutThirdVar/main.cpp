// WAP that prompts the user to enter number in two variables and swap the contents of the variables (Donot declare extra variable)

#include<iostream>

using namespace std;

int main(){
    int a, b;
    cout<<"Enter value of a and b : ";
    cin>>a>>b;
    a= a+b;     // a= a*b    // a= a^b      
    b= a-b;     // b= a/b    // b= a^b     
    a = a-b;    // a= a/b    // a= a^b
    cout<<"Value of a and b after swapping is : "<<a<<" "<<b;
    return 0;
}                

