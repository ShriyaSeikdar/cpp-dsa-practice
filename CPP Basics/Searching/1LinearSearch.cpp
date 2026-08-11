// #include<iostream>
// using namespace std;

// int LinearSearch( int arr[], int n, int x) {
//     for(int i=0;i<n;i++) {
//         if( arr[i]==x) {
//             return i;
//         }
//     }
//      return -1;
// }

// int main() {
//     int arr[100],n,x;
//     cout<<"Enter the size of the array: ";
//     cin>>n;
//     cout<<"Enter the elements of the array: ";
//     for(int i=0;i<n;i++) {
//         cin>>arr[i];
//     }
//     cout<<"Enter the element to be searched: ";
//     cin>>x;
//     int result = LinearSearch(arr,n,x);
//     if(result==-1) {
//         cout<<"Element not found in the array."<<endl;
//     } else {
//         cout<<"Element found at index: "<<result<<endl;
//     }
//     return 0;
// }

#include<iostream>
using namespace std;

int LinearSearch( int arr[], int n, int x) {
    for(int i=0; i<n; i++) {
        if(arr[i] == x) {
            return i;
        }
    }
    return -1;

    }
    
    int main() {
        int arr[100];
        int n,x;

        cout<<"enter the size of the array: ";
        cin>>n;

        cout<<"enter the elements of the array: ";
        for(int i=0; i<n; i++) {
            cin>>arr[i];            
        }

        cout<<"enter the element to be searched: ";
        cin>>x;

        int result = LinearSearch(arr,n,x);
        if(result==-1) {
            cout<<"Element not found in the array."<<endl;
        } else {
            cout<<"Element found at index: "<<result<<endl;
        }

    }