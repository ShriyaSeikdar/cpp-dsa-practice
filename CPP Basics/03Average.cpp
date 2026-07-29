/* Problem - Average of 3 numbers
   Concepts - Input/Output, Arithmetic operations, typecasting
   Time complexity - O(1)
*/

#include<iostream>
using namespace std;

int main() {
    int a;
    int b;
    int c;

    float avg;

    cout<<"enter the first number: ";   
    cin>>a;
    cout<<"enter the second number: ";
    cin>>b;
    cout<<"enter the third number: ";
    cin>>c;
    cout<<"the average is: "<<(float)(a+b+c)/3<<endl;

    return 0;
}
