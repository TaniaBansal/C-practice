/* How many numbers are divisible by a or b from 1 to n.
*/

#include<iostream>
using namespace std;

void divisible(int n, int a, int b){
    int n1 = n/a;
    int n2 = n/b;
    int n3 = n/(a*b);
    cout<<(n1+n2)-n3<<endl;
}

int main(){
    int n, a, b;
    cin>>n>>a>>b;
    divisible(n,a,b);
    return 0;
}