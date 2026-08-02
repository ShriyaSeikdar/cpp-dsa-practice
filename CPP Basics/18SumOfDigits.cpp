#include<iostream>
using namespace std;

int main() {
    int num;
    cout<<"enter the number here: ";
    cin>>num;

    int sum = 0;

    while( num>0 ) {
        int newNum;
        newNum = num % 10;
        sum = sum + newNum;
        num = num/10;
    }

    cout<<"the sum of digits is: "<<sum<<endl;
}