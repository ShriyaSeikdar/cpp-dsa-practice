#include<iostream>
using namespace std;

void ReverseArray(int arr[], int n) {
    cout<<"the reversed array is: ";
    for(int i=n-1; i>=0; i--) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int arr[100];
    int n;

    cout<< "enter the size of the array: "<<endl;
    cin>>n;

    for(int i=0; i<n; i++) {
        cout<<"enter the element at index "<<i<<": ";
        cin>>arr[i];
    }

    ReverseArray(arr, n);

    return 0;
}