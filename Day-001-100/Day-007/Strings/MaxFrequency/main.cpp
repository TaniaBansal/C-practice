/* Given a string s of latin characters , ypur task is to output the character which has maximum frequency
*/

#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string str;
    cout<<"Enter string : ";
    cin>>str;
    int freq[26];
    for(int i=0; i<26; i++){
        freq[i] = 0;
    }

    for(int i=0; i<str.size(); i++){
        freq[str[i]-'a']++;
    }

    int maxF = 0;
    char ans = 'a';

    for(int i=0; i<26; i++){
       if(freq[i] > maxF){
           maxF = freq[i];
           ans = i+ 'a';
       }
    }
    cout<<maxF<<" "<<ans<<endl;
    return 0;
}