#include<iostream>
using namespace std;

int SecondLargest(int arr[], int n) {
    int largest=0;
    int secondLargest=0;
    for(int i=0; i<n-1; i++){
        if (arr[i] < arr[i+1]) {
            largest = arr[i+1];
            }
        }

        arr[n-1] = largest; 
        
        for(int i=0; i<n-2; i++){            
        if (arr[i] < arr[i+1]) {
            secondLargest = arr[i+1];
            } 
        }

        return secondLargest;
}

int main() {
    int arr[100];
    int n;
    int ans;

    cout<<"Enter the size of array: "<<endl;
    cin>>n;

    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }


    ans = SecondLargest(arr,n);


    cout<<"The second largest element is: "<<ans;

    return 0;

};