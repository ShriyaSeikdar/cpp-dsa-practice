#include<iostream>
using namespace std;

int main() {
    int num;

    cout<<"enter the number here: ";
    cin>>num;

    if(num>10 && num<100) {
        int reversedNum = 0;
        int originalNum = num;

        reversedNum = (num % 10) * 10 + (num/10);
        cout<<"the reversed number of "<<originalNum<<" is: "<<reversedNum<<endl;
    }
}