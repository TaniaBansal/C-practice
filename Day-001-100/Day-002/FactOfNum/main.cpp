/* WAP to print factorial of a number
*/

#include<iostream>
using namespace std;

int main(){
    int num;
    int fact=1;
    cout<<"Enter number : ";
    cin>>num;
    for(int i=2; i<=num; i++){
        fact = fact*i;
    }
    cout<<"Factorial of a number is : "<<fact;
    return 0;
}
