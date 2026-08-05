#include<iostream>
using namespace std;

bool isArmstrong(int num) {
    int originalNum;

    int remainder;
    int result = 0;

    originalNum = num;

    while( originalNum!= 0 ) {
        remainder = originalNum%10;
        result += remainder*remainder*remainder;
        originalNum /= 10;  
    }
    if(result == num) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int num;    
    int result = isArmstrong(153);

    cout <<"153 is an Armstrong number: " << (result ? "true" : "false") << endl;
    return 0;
}