#include<iostream>
using namespace std;

int main() {
    int marks;

    cout<<"enter your marks here: ";
    cin>>marks;

    if (marks>=90) {
        cout<<"Congrats! your grade is A"<<endl;
    }
    else if (marks>=80) {
        cout<<"Congrats! your grade is B"<<endl;
    }
    else if (marks>=70) {
        cout<<"Congrats! your grade is C"<<endl;
    }
    else if (marks>=60) {
        cout<<"Congrats! your grade is D"<<endl;
    }
    else if (marks<50) {
        cout<<"Sorry!you failed the exam :("<<endl;
    }
    
    }

