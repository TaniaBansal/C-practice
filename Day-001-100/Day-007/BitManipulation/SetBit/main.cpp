/* WAP to set a bit at particular position
*/

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter number : ";
    cin>>num;
    int pos;
    cout<<"Enter position at which you want to set bit : ";
    cin>>pos;
    int setBit = num | (1<<pos);
    cout<<setBit;
    return 0;
}