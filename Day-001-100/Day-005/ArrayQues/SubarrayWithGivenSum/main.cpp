/* Given an unsorted array A of size N of non-negative integers, find a continuous
subarray which adds to a given number S.
Constraints
1 <= N <= 105
0 <= Ai <= 1010
Example
Input:
N = 5, S = 12
A[] = {1,2,3,7,5}
Output: 2 4
Explanation: The sum of elements from 2nd position to 4th position is 12.
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size : ";
    cin>>n;
    int a[n];
    cout<<"Enter elements : ";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int S;
    cout<<"Enter value of s : ";
    cin>>S;
    int i=0, j=0, st = -1, en = -1, sum =0;
        while(j<n && sum+a[j] <= S){
            sum = sum+ a[j];
            j++;
        }

        if(sum == S){
            cout<<i+1<<" "<<j<<endl;
            return 0;
        }

        while(j<n){
            sum = sum + a[j];
            while(sum > S){
                sum = sum - a[i];
                i++;
            }
            
            if(sum == S){
                st = i+1;
                en = j+1;
               break;
            }
            j++;
       }
     cout<<st<<" "<<en<<endl;
     return 0;
}