// Program to check alphabets using conditional operator

#include<iostream>

using namespace std;

int main(){
    char ch;
    cout<<"Enter character : ";
    cin>>ch;
    cout<<"It is "<<((ch>='A' && ch<='Z') || (ch>= 'a' && ch<= 'z')? "Alphabet" : "Non-alphabet");
    return 0;
}