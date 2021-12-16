/* WAP to print all prime numbers n in a given range
*/

#include<iostream>
using namespace std;

int main(){
    int num, i, a , b;
    cout<<"Enter value of a and b : ";
    cin>>a>>b;
    for(num=a; num<=b ; num++){
        for(i=2; i<num; i++){
            if(num%i == 0){
                break;
            }
        }
        if(i == num){
            cout<<i<<endl;
        }
    }
    return 0;
}