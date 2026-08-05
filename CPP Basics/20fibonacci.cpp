#include<iostream>
using namespace std;

int main() {
    int num;
    int fib = 0;

    cout<<"enter the number here: ";
    cin>>num;
    int count = 0;

    for (int i = 0; i < num; i++) {
        fib = fib + count;
        count++;
    }
    cout << "The " << num << "th Fibonacci number is: " << fib << endl;
}