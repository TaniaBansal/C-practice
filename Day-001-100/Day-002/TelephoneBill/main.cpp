/* Write a program that prompts the user to input number of calls and calculate the monthly telephone bills as per the following rule:
Minimum Rs. 200 for up to 100 calls.
Plus Rs. 0.60 per call for next 50 calls.
Plus Rs. 0.50 per call for next 50 calls.
Plus Rs. 0.40 per call for any call beyond 200 calls.
*/


#include<iostream>

using namespace std;

int main(){
    int calls;
    float bill =0;
    cout<<"Enter number of calls : ";
    cin>>calls;
    if(calls<=100){
        bill = 200;
    }
    else if(calls>100 && calls<=150){
        calls = calls-100;
        bill = 200 + (calls*0.60);
    }
    else if(calls>150 && calls<=200){
        calls = calls-150;
        bill = 200 + (50*0.60) + (calls*0.50);
    }
    else{
        calls = calls-200;
        bill = 200 + (50*0.60) + (50*0.50) + (calls*0.40);
    }
    cout<<"Telephone bill is = "<<bill;
    return 0;
}