/* WAP to print all digits of a positive decimal number from right to left
*/

#include<iostream>
using namespace std;

int main(){
    int num, sum=0;
    cout<<"Enter a number : ";
    cin>>num;
    while(num>0){
        int rem = num%10;
        cout<<rem<<" ";
        num = num/10;
    }
    return 0; 
}