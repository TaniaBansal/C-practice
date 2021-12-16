// WAP to check even or odd number using bitwise operator

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter number : ";
    cin>>num;
    if(num & 1 == 1){
        cout<<"Odd number";
    }
    else{
        cout<<"Even Number";
    }
    return 0;
}