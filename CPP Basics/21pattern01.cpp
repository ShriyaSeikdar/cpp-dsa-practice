#include<iostream>
using namespace std;

int main() {

    int num;
    cout<<"enter the number here: ";
    cin>>num;

    for(int i = 0; i <= num; i++) {
        cout<<"*";
        for (int j = 1; j <= i; j++) {
            cout<<"|";
            for (int k = 1; k <= j; k++) {
                cout<<"*";
            }
             
        }
        cout<<endl;
    }
}