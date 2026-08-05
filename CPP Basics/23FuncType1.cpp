//Student Grade Analyzer

// Asks the user to enter marks of 5 subjects.
// Calculates total, percentage, and grade.
// Prints everything inside the function.

#include <iostream>
using namespace std;

void gradeAnalyser() {
    int marks[5];
    int total = 0;
    float percentge;
    char grade;

    cout << "Enter marks of 5 subjects: ";
    for(int i = 0; i < 5; i++) {
        cin >> marks[i];
        total += marks[i];
    }

    percentge = (total / 500.0) * 100;

    if(percentge >= 80) {
        grade = 'A';
    } else if(percentge >= 60) {
        grade = 'B';
    } else if(percentge >= 40) {
        grade = 'C';
    } else {
        grade = 'D';
    }

    cout << "total: " << total << endl;
    cout << "percentage: " << percentge << "%" << endl;
    cout << "grade: " << grade << endl;
}


int main() {
    gradeAnalyser();
    return 0;
}