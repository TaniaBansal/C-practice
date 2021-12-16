// Write a program that prompts the user to input a number. Program should display the corresponding days to the number

#include<iostream>

using namespace std;

int main(){
    int day;
    cout<<"Enter number from 1 to 7 : ";
    cin>>day;
    switch(day){
        case 1:
        cout<<"Sunday";
        break;

        case 2:
        cout<<"Monday";
        break;

        case 3:
        cout<<"Tuesday";
        break;

        case 4:
        cout<<"Wednesday";
        break;

        case 5:
        cout<<"Thursday";
        break;

        case 6:
        cout<<"Friday";
        break;

        case 7:
        cout<<"Saturday";
        break;

        default:
        cout<<"Invalid Input";
    }
    return 0;
}