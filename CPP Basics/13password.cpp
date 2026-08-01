#include<iostream>
using namespace std;

int main() {
   int pin;
   string name;  

   cout<<"THIS IS THE NEW VERSION"<<endl;
   
    cout<<"enter your name here: ";
    cin>>name;

    cout<<"enter your pin here: ";
    cin>>pin;

    cout<<"thanks for registering!"<<endl;
    system("cls");

    int enteredPin;
    cout<<"To login,enter your pin here: ";
    cin>>enteredPin;

    if ( pin== enteredPin) {
        cout<<"welcome "<<name<<endl;
    }
    else {
        cout<<"invalid pin, get out"<<endl;
    }
}