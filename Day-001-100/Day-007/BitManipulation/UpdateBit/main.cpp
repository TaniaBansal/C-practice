/* WAP to update a bit at particular position
*/

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter number : ";
    cin>>num;
    int pos;
    cout<<"Enter position : ";
    cin>>pos;
    int mask = ~(1<<pos);
    num = num & mask;
    int value;
    cout<<"Enter value by which you want to update bit : ";
    cin>>value;
    int updateBit = num | (value<<pos);
    cout<<updateBit<<endl;
    return 0;
}