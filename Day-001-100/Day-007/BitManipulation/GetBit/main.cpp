/* WAP to get a bit at particular position
*/

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter number : ";
    cin>>num;
    int pos;
    cout<<"Enter position at which you want get bit : ";
    cin>>pos;
    int bitStatus = num & (1<<pos);
    if(bitStatus != 0){
        cout<<"1";
    }
    else{
        cout<<"0";
    }
    return 0;
}
