#include<iostream>
using namespace std;

int main() {
    int num;
    int count = 0;

    cout<<"enter the number here: ";
    cin>>num;

    while (num>0) {
        
        int digit = num % 10;
        count++;
        num = num / 10;

    }

    cout<<"the number of digits is: "<<count<<endl;
}