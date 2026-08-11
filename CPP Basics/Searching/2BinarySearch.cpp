#include<iostream>
using namespace std;

int BinarySearch( int arr[], int low, int mid, int high, int x) {
    while(low<=high) {
        mid = (low+high)/2;
        if(arr[mid]==x) {
            return mid;
        } else if(arr[mid]<x) {
            low=mid+1;
        } else {
            high=mid-1;
        }
        }
    return -1;
}

int main() {
    int arr[100],n,x;
    cout<<"enter the size of the array: ";
    cin>>n;
    cout<<"enter the elements of the array in sorted order: ";
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    cout<<"enter the element to be searched: ";
    cin>>x;
    int result = BinarySearch(arr,0,0,n-1,x);
    if(result==-1) {
        cout<<"element not found in the array."<<endl;
    } else {
        cout<<"element found at index: "<<result<<endl;
    }
    return 0;
}
