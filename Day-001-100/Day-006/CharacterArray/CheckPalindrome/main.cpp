/* Check if a given character array is a palindrome or not.
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size : ";
    cin>>n;
    cout<<"Enter elements in array : ";
    char ch[n+1];
    cin>>ch;
    bool check = 1;
    for(int i=0; i<n; i++){
        if(ch[i] != ch[n-1-i]){
            check = 0;
            break;
        }
    }
    if(check){
        cout<<"word is a palindrome";
    }
    else{
        cout<<"word is not a palindrome";
    }
    return 0;
}