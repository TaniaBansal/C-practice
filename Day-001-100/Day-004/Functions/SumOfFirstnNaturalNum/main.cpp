/* WAP to print sum of first n natural numbers
*/

#include<iostream>
using namespace std;

int sum(int);
int main(){
    int n;
    cout<<"Enter value of n : ";
    cin>>n;
    int result = sum(n);
    cout<<"Sum is : "<<result;
    return 0;
}

int sum(int num){
    int ans=0;
    for(int i=1; i<=num; i++){
        ans = ans + i;
    }
    return ans;
}