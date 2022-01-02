/* WAP to check if a given number is power of 2 or not
*/

#include<iostream>
using namespace std;

bool ispowerof2(int n){
    return(n && !(n & n-1));
}

int main(){
    int num;
    cout<<"Enter number : ";
    cin>>num;
    cout<<ispowerof2(num)<<endl;
    return 0;
}