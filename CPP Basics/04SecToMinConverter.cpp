/* Problem - Seconds to minutes converter
   Concepts - Input/Output, Arithmetic operations, typecasting
   Time complexity - O(1)
*/

#include<iostream>
using namespace std;

int main(){
    cout<<"here's seconds to minutes converter!"<<endl;
    float seconds;
    int minutes;

    cout<<"enter the seconds: ";
    cin>>seconds;
    minutes = seconds/60;
    int seconds_remaining = (int) seconds % 60;

    cout<<"thanks for entering the time in seconds \t the time in minutes is-- "<<minutes<< " minutes and "<<seconds_remaining<<" seconds"<<endl;

    return 0;

}