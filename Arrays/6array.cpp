#include<iostream>
#include<vector>
using namespace std;

int remDup(vector<int>& nums) {
    int k=1;

    for(int i=1;i<nums.size();i++) {
        if(nums[i]!=nums[i-1]) {
            nums[k]=nums[i];
            k++;
        }
    }

    return k;
}

int main() {
    int k;
    int n;

    cout<<"enter the value of n: ";
    cin>>n;

    vector<int> nums(n);

    cout<<"Enter the array elements here: ";
    for(int i=0;i<n;i++) {
        cin>>nums[i];
    }

    k=remDup(nums);

    cout<<"The unique elements are: ";
    for(int i=0;i<k;i++) {
        cout<<nums[i]<<" ";
    }

    return 0;
}