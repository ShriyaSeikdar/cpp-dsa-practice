#include<iostream>
using namespace std;

void SalarySlip(int salary) {
    int hra, da, totalSalary;  

    hra = salary * 0.2;
    cout << "HRA: " << hra << endl;
    da = salary *0.15;
    cout << "DA: " << da << endl;
    totalSalary = salary + hra + da;
    cout << "Total Salary: " << totalSalary << endl;
}

int main() {
    int salary, hra, da, totalSalary;
    SalarySlip(10000);
    return 0;
}