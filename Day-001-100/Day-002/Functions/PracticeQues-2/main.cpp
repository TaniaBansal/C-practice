/* Write a function named biggest that receives three integer arguments and returns the largest of the three values.
   Call this function from main( ) and print the biggest number. 
*/

#include<iostream>
using namespace std;

int biggest(int, int, int);
int main(){
   int a, b , c, d;
   cout<<"Enter numbers : ";
   cin>>a>>b>>c;
   d= biggest(a,b,c);
   cout<<"Largest value is : "<<d;
   return 0;
}

int biggest(int x, int y, int z){
    int result;
    if(x>y && x>z){
        result = x; 
    }
    else if(y>z){
        result = y;
    }
    else{
        result = z;
    }
    return result;
}