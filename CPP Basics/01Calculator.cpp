/* Problem - Basic calculator
   Concepts - Input/Output, Arithmetic operations
   Time complexity - O(1)
*/


#include<iostream>
using namespace std;

int main(){
    int a, b;;
    cout<<"Here's our calculator!"<<endl;

    cout<<"enter the first numeber: ";
    cin>>a;
    cout<<"enter the second number: ";
    cin>>b;

    cout<<"sum is: "<<a+b<<endl;
    cout<<"difference is: "<<a-b<<endl;
    cout<<"product is: "<<a*b<<endl;
    cout<<"quotient is: "<<(float)a/b<<endl;

}