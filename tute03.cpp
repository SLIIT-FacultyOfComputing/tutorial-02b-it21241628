/*Exercise 3 - Repeatition

Convert the C program given below which calculates the Factorial of a number that you input from the keyboard to a C++ program.

Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

#include <iostream>
using namespace std;

int main() {
  int number;
  long Factorial = 1;

  cout << "Enter a Number : ";
  cin >> number;

  for (int r = number; r >= 1; r--) { //r from number to 1
    Factorial *= r;
  }

  cout << "Factorial of " << number << " : " << Factorial;
  return 0;
}
