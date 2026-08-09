#include<iostream>
using namespace std;

void printPattern(int n) {

        for(int i=n; i>0; i--){
        for(int j=1; j<=i; j++){
            cout<<j*3;
        }
        cout<<endl;
    }
    
}

int main() {
    printPattern(5);
    return 0;
}