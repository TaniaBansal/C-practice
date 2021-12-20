/* WAP to add two binary numbers
*/

#include<iostream>
using namespace std;

int reverse(int);
int add(int, int);
int main(){
    int a, b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    cout<<add(a,b);
    return 0;
}

int add(int a, int b){
    int ans= 0;
    int prevCarry = 0;
    while(a>0 && b>0){
    if(a%2 == 0 && b%2 == 0){
            ans = ans*10 + prevCarry;
            prevCarry = 0;
    }
        
    else if((a%2 == 1 && b%2 == 0) || (a%2 == 0 && b%2 == 1)){
        if(prevCarry == 1){
            ans = ans*10 + 0;
            prevCarry = 1;
        }
        else{
            ans = ans*10 + 1;
            prevCarry = 0;
        }
    }

    else{
        ans = ans*10 + prevCarry;
        prevCarry = 1;
    } 
    a = a/10;
    b = b/10;
}
  

    while(a>0){
        if(prevCarry == 1){
            if(a%2 == 1){
                ans = ans*10 + 0;
                prevCarry = 1; 
            }
            else{
                ans = ans*10 + 1;
                prevCarry = 0;
            }
        }
        else{
            ans = ans*10 + (a%2);
            prevCarry = 0;
        }
        a= a/10;
    }

    while(b>0){
        if(prevCarry == 1){
            if(a%2 == 1){
                ans = ans*10 + 0;
                prevCarry = 1; 
            }

            else{
                ans = ans*10 + 1;
                prevCarry = 0;
            }
        }
        else{
            ans = ans*10 + (a%2);
            prevCarry= 0;
        }
        b = b/10;
    }

    if(prevCarry == 1){
        ans = ans*10 + 1;
    }

    int result = reverse(ans);
    return result;
}

int reverse(int n){
    int sum =0;
    while(n > 0){
        int lastDigit = n%10;
        sum = sum*10 + lastDigit;
        n = n/10;
    }
    return sum;
}