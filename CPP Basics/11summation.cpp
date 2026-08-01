#include<iostream>
using namespace std;

int main() {
    int i;
    int sum=0;
    int n;

    cout<<"enter the value of n: ";
    cin>>n;

    for(i=1; i<=n; i++) {
        sum = sum + i;
    }
    cout<<"the sum is : "<<sum<<endl;
}