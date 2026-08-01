#include<iostream>
using namespace std;

int main() {
    int num1;
    int num2;
    int num3;

    cout<<"enter the first number: ";
    cin>>num1;
    cout<<"enter the second number: ";
    cin>>num2;
    cout<<"enter the third number: ";
    cin>>num3;

    if (num1>num2 && num1>num3) {
        cout<<"the largest number is: "<<num1<<endl;
    }
    else if (num2>num1 && num2>num3) {
        cout<<"the largest number is: "<<num2<<endl;
    }
    else {
        cout<<"the largest number is: "<<num3<<endl;
    }
}