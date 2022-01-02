/* WAP to count the no of ones in binary representation of a number
*/

#include<iostream>
using namespace std;

void numberofones(int n){
    int count =0;
    while(n!= 0){
       n = n& (n-1);
       count++;
    }
    cout<<count<<endl;
}

int main(){
    int n;
    cin>>n;
    numberofones(n);
    return 0;
}