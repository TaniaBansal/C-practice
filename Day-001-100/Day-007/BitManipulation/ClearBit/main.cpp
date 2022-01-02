/* WAP to clear bit from particular position
*/

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter number : ";
    cin>>num;
    int pos;
    cout<<"Enter position from which you want to clear a bit : ";
    cin>>pos;
    int mask = ~(1<<pos);
    int clearBit = num & mask;
    cout<<clearBit<<endl;
    return 0;
}