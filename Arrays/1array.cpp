// Input, Access & Traverse

// Take n integers into an array and print:

// The first element
// The last element
// All elements

#include<iostream>
using namespace std;

void AccessArray( int arr[], int n) {

   
    

    for (int i=0; i<n; i++) {
        cout<<"enter the element at index "<<i<<": ";
        cin>>arr[i];
    }

    cout<<"the first element is: "<<arr[0]<<endl;
    cout<<"the last element is: "<<arr[n-1]<<endl;
    cout<<"all elements are: ";
    for (int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int n;
    int arr[100];

    cout<< "enter the size of the array: "<<endl;
    cin>>n;
    
    AccessArray(arr, n);

    return 0;
}