#include<iostream>
#include<vector>
using namespace std;

void rotateArray(vector<int>& nums) {
    int last=nums[nums.size()-1];

    for(int i=nums.size()-1;i>0;i--) {
        nums[i]=nums[i-1];
    }

    nums[0]=last;
}

int main() {
    int n;

    cout<<"enter the number of elements: ";
    cin>>n;

    vector<int> nums(n);

    cout<<"enter the array elements: ";
    for(int i=0;i<n;i++) {
        cin>>nums[i];
    }

    cout<<"the original array: ";
    for(int i=0;i<n;i++) {
        cout<<nums[i]<<" ";
    }

    rotateArray(nums);

    cout<<"\nthe rotated array: ";
    for(int i=0;i<n;i++) {
        cout<<nums[i]<<" ";
    }

    return 0;
}