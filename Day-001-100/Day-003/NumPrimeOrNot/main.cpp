/* WAP to check if a number is prime or not
*/

#include<iostream>
using namespace std;

int main(){
    int num , i;
    bool flag =0;
    cout<<"Enter a number : ";
    cin>>num;
    for(i=2; i<num; i++){
        if(num%i == 0){
            cout<<"Not a prime number";
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        cout<<"Prime Number";
    }
    return 0;
}