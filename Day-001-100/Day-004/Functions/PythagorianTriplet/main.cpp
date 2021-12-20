/* Check whether a given triplet is a pythagorian triplet or not
*/

#include<iostream>
using namespace std;

bool check(int, int, int);
int main(){
    int a, b, c;
    cout<<"Enter values : ";
    cin>>a>>b>>c;
    if(check(a,b,c)){
        cout<<"Triplet is a pythagorian triplet";
    }
    else{
        cout<<"Triplet is not a pythagorian triplet";
    }
    return 0;
}

bool check(int a, int b, int c){
   int x = max(a, max( b, c));
   int y, z;
   if(x == a){
       y = b;
       z = c;
   }
   else if(x == b){
       y = a;
       z = c;
   }
   else{
       y = a;
       z = b;
   }
   if(x*x == y*y + z*z){
       return true;
   }
   else{
       return false;
   }
}