/* WAP to check if a number is Armstong Number or not
*/

#include<iostream>
using namespace std;

int main(){
    int num, originalNo, sum=0;
    cout<<"Enter a number : ";
    cin>>originalNo;
    num = originalNo;
    while(num>0){
        int rem = num%10;
        sum = sum+ rem*rem*rem;
        num= num/10;
    }
    if(originalNo == sum){
        cout<<"Armstong Number";
    }
    else{
        cout<<"Not Armstong Number";
    }
    return 0; 
}