// To enter the username and password and then check if password is correct then print successfully otherwise incorrect password

#include<iostream>
using namespace std;

int main(){
    char username;
    int password;
    cout<<"Enter username : ";
    cin>>username;
    cout<<"Enter password : ";
    cin>>password;
    if(username == 'a'){
        if(password == 12345){
            cout<<"Login Successful";
        }
        else{
            cout<<"Incorrect password";
        }
    }
    else{
        cout<<"Incorrect username";
    }
    return 0;
}