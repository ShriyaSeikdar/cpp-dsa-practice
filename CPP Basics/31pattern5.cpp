//diamond
#include<iostream>
using namespace std;

void printPattern(int n) {
    for(int i=0; i<n; i++) {
        //space
        for(int j=0; j<n-i-1; j++) {
            cout<<" ";
        }

        //star
        for(int j=0; j<2*i+1; j++) {
            cout<<"*";
        }

        //space
         for(int j=0; j<n-i-1; j++) {
            cout<<" ";
        }
        cout<<endl;
    }

    for(int i=n-1; i>=0; i--) {
        //space
        for(int j=0; j<n-i-1; j++) {
            cout<<" ";
        }

        //star
        for(int j=0; j<2*i+1; j++) {
            cout<<"*";
        }

        //space
         for(int j=0; j<n-i-1; j++) {
            cout<<" ";
        }
        cout<<endl;
    }
}


int main() {
    int n;
    cout<<"Enter n: ";
    cin>>n;
  
    printPattern(n);
    return 0;
}