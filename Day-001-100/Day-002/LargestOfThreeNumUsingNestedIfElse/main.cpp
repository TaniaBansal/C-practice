// Program to find largest number of the three using if-else

#include<iostream>

using namespace std;

int main(){
    int a , b, c;
    cout<<"Enter value of a, b and c : ";
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            cout<<"Largest number is a = "<<a;
        }
        else{
            cout<<"Largest number is c = "<<c;
        }
    }
    else{
        if(b>c){
            cout<<"Largest number is b = "<<b;
        }
        else{
            cout<<"Largest number is c = "<<c;
        }
    }
    return 0;
}