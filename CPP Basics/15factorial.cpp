#include<iostream>
using namespace std;

int main() {
    int num;
    int factorial = 1;

    cout<<"enter the number whose factorial you want to calculate: ";
    cin>>num;
    
    for (int i = 1; i <= num; i++) {
        factorial = factorial * i;
    }
    cout<<"The factorial of "<<num<<" is: "<<factorial<<endl;
}