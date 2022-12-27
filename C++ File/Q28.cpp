// Write a program and handle exception that occurs during division and denominator is zero.

#include <iostream>
#include <stdexcept>  // Required for exception handling
#include <string>


using namespace std;

int main() {
  try {
    int numerator, denominator;

    // Prompt user for numerator and denominator
    cout << "Enter numerator: ";
    cin >> numerator;
    cout << "Enter denominator: ";
    cin >> denominator;

    // Divide numerator by denominator
    if (denominator == 0) {
      throw "Division by zero is not allowed.";
    }
    int result = numerator/denominator;

    // Display result
    cout << "Result: " << result << endl;
  } catch (string s) {
    cout << "Error: Can't divide by zero" << endl;
  }

  return 0;
}
