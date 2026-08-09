//pattern1
#include<iostream>
using namespace std;

void printPattern() {
    int n;

    cout<<"Enter n: ";
    cin>>n;

    for(int i=0;i<n;i++) {
    
        for(int j=0;j<=i;j++) {
            cout<<"*";
        }
        cout<<endl;
    }
}

int main() {
    printPattern();
    return 0;
}