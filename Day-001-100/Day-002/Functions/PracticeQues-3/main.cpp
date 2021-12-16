/*  A prime number is an integer greater than 1 that is evenly divisible by only 1 and itself. For example, the number 5 is prime because it can only be evenly divided by 1 and 5. 
The number 6, however, is not prime because it can be divided by 1, 2, 3, and 6. 
Write a function named isPrime, which takes an integer as an argument and returns 1 if the argument is a prime number, and 0 otherwise.Use this function by calling it in main() to display a list of the prime numbers from 100 to 500. 
*/

#include<iostream>
using namespace std;

int isPrime(int);
int main(){
   int num, x;
   for(num=100; num<=500; num++){
      if(isPrime(num)){
          cout<<num<<" ";
      }
   }  
   return 0;
}

int isPrime(int n){
   int i, result;
   for(i=2; i<n; i++){
       if(n%i == 0){
           return 0;
       }
   }
   return 1;
}