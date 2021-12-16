/*  Write a function named areaRectangle, that takes length, width as parameter and returns the area of rectangle.
 Write a program that demonstrates the function by calling it and displays the return value.
*/

#include<iostream>
using namespace std;

int areaRectangle(int, int);
int main(){
    int l, b, A;
    cout<<"Enter value of l and b : ";
    cin>>l>>b;
    A = areaRectangle(l,b);
    cout<<"Area is : "<<A;
    return 0;  
}

int areaRectangle(int length, int width){
    int area;
    area = length*width;
    return area;
}