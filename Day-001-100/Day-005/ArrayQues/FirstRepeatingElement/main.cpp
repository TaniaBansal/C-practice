/* Given an array arr[] of size N. The task is to find the first repeating element in an
array of integers, i.e., an element that occurs more than once and whose index of
first occurrence is smallest.
Constraints
1 <= N <= 106
0 <= Ai <= 106
Example
Input:
7
1 5 3 4 3 5 6
Output:
2
Explanation:
5 is appearing twice and its first appearance is at index 2 which is less than 3
whose first occurring index is 3.
*/

#include<climits>
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size : ";
    cin>>n;
    int a[n];
    cout<<"Enter elements is array : ";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int idx[n];
    for(int i=0; i<n; i++){
        idx[i] = -1;
    }

    int minidx = INT_MAX;
    for(int i=0; i<n; i++){
        if(idx[a[i]] != -1){
            minidx = min(minidx, idx[a[i]]);
        }
        else{
            idx[a[i]] = i;
        }
    }
    if(minidx == INT_MAX){
        cout<<-1<<" ";
    }
    else{
        cout<<"First repeating element is at position : "<<minidx+1<<endl;
    }
    return 0;
}