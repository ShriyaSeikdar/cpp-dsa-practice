#include<iostream>
using namespace std;

int AddEvenOdd(int arr[], int n, int sum, int countEven, int countOdd) {

    //add
    for(int i=0; i<n;i++) {
        sum = sum + arr[i];
    }

    //even
    for(int i=0;i<n;i++) {

        if(arr[i]%2==0) {
            countEven++;
        }
    }

    //odd
    for(int i=0;i<n;i++) {

        if(arr[i]%2!=0) {
            countOdd++;
        }
    }

    cout<<"the sum of the array is: "<<sum<<endl;
    cout<<"the count of even numbers is: "<<countEven<<endl;    
    cout<<"the count of odd numbers is: "<<countOdd<<endl;
}

int main() {
    int n;
    int arr[100];
    int sum=0;
    int countEven=0;
    int countOdd=0;

    cout<< "enter the size of the array: "<<endl;
    cin>>n;

    for(int i=0; i<n; i++) {
        cout<<"enter the element at index "<<i<<": ";
        cin>>arr[i];
    }

    AddEvenOdd(arr, n, sum, countEven, countOdd);

    return 0;
}