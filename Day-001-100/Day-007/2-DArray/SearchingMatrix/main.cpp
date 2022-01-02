#include<iostream>
using namespace std;

int main(){
    int n, m;
    cout<<"Enter no. of rows and columns : ";
    cin>>n>>m;
    int arr[n][m];
    cout<<"Enter elements in matrix : ";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    int key;
    cout<<"Enter num you want to search : ";
    cin>>key;
    int flag =0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] == key){
                cout<<i<<" "<<j<<endl;;
                flag = 1;
            }
        }
    }

    if(flag){
        cout<<"Number found"<<endl;
    }
    else{
        cout<<"Number not found"<<endl;
    }
    return 0;
}