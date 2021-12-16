// Program to print largest of three numbers

#include<iostream>

using namespace std;

int main(){
    int a, b, c;
    cout<<"Enter value of a, b and c : ";
    cin>>a>>b>>c;
    if(a>b && a>c){
        cout<<"Largest number is a "<<a;
    }
    else if(b>c){
        cout<<"Largest number is b "<<b;
    }
    else{
        cout<<"Largest number is c "<<c;
    }
    return 0;
}