/* Problem - Swap 2 numbers
   Concepts - Input/Output, assignment operator
   Time complexity - O(1)
*/

#include<iostream>
using namespace std;

int main() {
    int a,b,c;
    cout<<"enter the first number: ";
    cin>>a;
    cout<<"enter the second number: ";
    cin>>b;
    
    c=a;
    a=b;
    b=c;

    cout<<"the value swapped value of a is: "<<a<<endl;
    cout<<"the value swapped value of b is: "<<b<<endl;
    return 0;
}