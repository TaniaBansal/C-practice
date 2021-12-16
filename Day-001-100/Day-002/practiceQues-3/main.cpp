/* Write a program to enter the numbers till the user wants and at the end it should display the count of positive, negative and zeros entered.
*/

#include<iostream>
using namespace std;

int main(){
    int n, positive=0, negative=0 , zero =0;
    char choice;
    do{
        cout<<"Enter a number : ";
        cin>>n;
        if(n>0){
            positive++;
        }
        else if(n<0){
            negative++;
        }
        else{
            zero++;
        }
        cout<<"Do you want to continue (y/n)?";
        cin>>choice;
    }
    while(choice== 'y' || choice== 'Y');
    cout<<"No. of positive numbers are : "<<positive<<endl;
    cout<<"No. of negative numbers are : "<<negative<<endl;
    cout<<"No. of zeroes are : "<<zero<<endl;
    return 0;
}