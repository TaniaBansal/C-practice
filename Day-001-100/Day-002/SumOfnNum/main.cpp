/* WAP that asks the user for a positive integer value. The program should calculate the sum of all the integers from 1 upto number entered.
   For e.g., if user enters 20, the loop will find the sum of 1,2,3,.......,20. 
*/

#include<iostream>
using namespace std;

int main(){
    int i, n, sum=0;
    cout<<"Enter value of n : ";
    cin>>n;
    if(n>0){
        sum = n*(n+1)/2;
        cout<<"Sum is : "<<sum;
    }
    else{
        cout<<"Error";
    }
    return 0;
}