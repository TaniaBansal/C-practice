/* Find the smallest positive missing number in the given array.
    Example: [0, -10, 1, 3, -20], Ans = 2
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements in array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    bool check[n];
    for(int i=0; i<n; i++){
        check[i] = false;
    }

    for(int i=0; i<n; i++){
        if(arr[i] >=0 ){
            check[arr[i]] = true;
        }
    }
    int ans = -1;
    for(int i=1; i<n; i++){
        if(check[i] == false){
            ans = i;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}