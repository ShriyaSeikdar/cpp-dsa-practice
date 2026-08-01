#include<iostream>
using namespace std;

int main() {
    char ch;

    cout<<"enter a character here: ";
    cin>>ch;

    if (ch>='A' && ch<='Z') {
        cout<<"The character is in uppercase"<<endl;
    }
    else if (ch>='a' && ch<='z') {
        cout<<"The character is in lowercase"<<endl;
    }
    else {
        cout<<"The character is not an alphabet"<<endl;
    }
    
    }