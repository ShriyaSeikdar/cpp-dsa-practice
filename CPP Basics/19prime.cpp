#include<iostream>
using namespace std;

int main() {
    int num;
    cout<<"enter the number here: ";
    cin>>num;

    int count = 0;
    for(int i = 1; i <= num ; i++) {
        if (num % i ==0 ) {
            count++;
        }
    }

    if (count == 2) {
        cout<<"the number is prime."<<endl;
    } else {
        cout<<"the number is not prime."<<endl;
    }

}