#include<iostream>
using namespace std;

int highestMarks() {
    int marks[5];
    cout << "Enter marks of 5 students: ";
    for(int i = 0; i < 5; i++) {
        cin >> marks[i];
    }
    int  highest = marks[0];
    for (int i = 1; i<5; i++){
        if(marks[i] > highest) {
            highest = marks[i];
        }
    }
    return highest;
}

int main() {
    int highest = highestMarks();
    cout << "Highest marks: " << highest << endl;
    return 0;
}