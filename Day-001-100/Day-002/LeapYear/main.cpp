/*Write a program that prompts the user to input a year and determine whether the year is a leap year or not.
Leap Years are any year that can be evenly divided by 4. A year that is evenly divisible by 100 is a leap year only if it is also evenly divisible by 400.
*/


#include<iostream>

using namespace std;

int main(){
    int year;
    cout<<"Enter year : ";
    cin>>year;
    if((year%4 == 0) && (year%400 != 0 || year%100 == 0))
    {
        cout<<"Leap year";
    }
    else{
        cout<<"Not Leap year";
    }
    return 0;
}