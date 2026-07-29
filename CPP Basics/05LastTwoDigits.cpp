/* Problem - Last two digits of a number
   Concepts - Input/Output, modulo operator
   Time complexity - O(1)
*/

#include<iostream>
using namespace std;

int main() {
    int num;
    cout<<"enter the number: ";
    cin>>num;

    cout<<"the last two digits are: "<<num%100<<endl;
    
    
    return 0;
}