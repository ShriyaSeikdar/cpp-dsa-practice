#include<iostream>
using namespace std;

int LargestSmallest(int arr[], int n, int largest, int smallest) {

    for(int i=0; i<n; i++) {
        if(arr[i]>largest) {
            largest = arr[i];
        }
    }

    for(int i=0; i<n; i++) {
        if(arr[i]<smallest) {
            smallest = arr[i];
        }
    }

    cout << "Largest element: " << largest << endl;
    cout << "Smallest element: " << smallest << endl;
}

int main() {
    int arr[100];
    int n;
    
    cout << "Enter the size of the array: ";
    cin>>n;

    for(int i=0; i<n; i++) {
        cout<<"enter the element at index "<<i<<": ";
        cin>>arr[i];

    }    
        int largest= arr[0];
        int smallest= arr[0];

    LargestSmallest(arr, n, largest, smallest);

    return 0;
}