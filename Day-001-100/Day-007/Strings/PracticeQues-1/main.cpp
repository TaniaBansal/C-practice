/* Given a string s with both uppercase and lowercase latin characters ('a' - 'z'). Your task is to convert whole string into
   1) Lower case    2) Upper case
*/

#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string str;
    cout<<"Enter string : ";
    cin>>str;

    // conversion to uppercase
    for(int i=0; i<str.length(); i++){
        if(str[i] >= 'a' && str[i]<= 'z'){
            str[i] = str[i] -32;
        }
        cout<<str[i];
    }
    cout<<endl;
  
    // conversion to lowercase
    for(int i=0; i<str.length(); i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] + 32;
        }
        cout<<str[i];
    }
    cout<<endl;
    return 0;
}


