/*Exercise 2 - Selection

Convert the C program given below which calculates an employee's salary to a C++ program.

Input Type, Salary, otHours

Type = 1
OtRate = 1000
Type = 2
OtRate = 1500
Type = 3
OtRate = 1700
Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

#include<iostream>
using namespace std;

int main() {
  double salary, netSalary;
  int eType, otHours, OtRate;

  cout << "Enter employee type: ";
  cin >> eType;
  cout << "Enter salary: ";
  cin >> salary;
  cout << "Enter OT hours: ";
  cin >> otHours;

  switch(eType) {
    case 1:
      OtRate = 1000;
      break;
    case 2:
      OtRate = 1500;
      break;
    default:
      OtRate = 1700;
      break;
  }

  netSalary = salary + (otHours * OtRate);
  cout << "Net Salary: " << netSalary;

  return 0;
}
