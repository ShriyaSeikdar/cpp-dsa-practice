#include<iostream>
using namespace std;

int main() {
    int balance=5000;
    int amount;

    cout<<"enter the amount here: ";
    cin>>amount;
    
    if ( amount <= balance) {
        balance = balance - amount;
        cout<<"your transaction is successful"<<endl;
        cout<<"your remaining balance is: "<<balance<<endl;
    }
    else {
        cout<<"your transaction is unsuccessful because of insufficient balance"<<endl;
        cout<<"your balance is: "<<balance<<endl;
    }
}