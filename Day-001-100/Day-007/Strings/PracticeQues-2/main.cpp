/* Given a string of integers, our task is to form the biggest number out of those numbers in string
*/

#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int main(){
    string str;
    cout<<"Enter string : ";
    cin>>str;
    sort(str.begin(), str.end(), greater<int>());
    cout<<str<<endl;
    return 0;
}