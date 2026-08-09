#include<iostream>
using namespace std;

void printPattern() {
    int n = 5;

    for(int i=1;i<=n;i++) {
        for(int j=1;j<=i;j++) {
            cout<<i;
        }
        cout<<endl;
    }
}

int main() {
    printPattern();
    return 0;
}