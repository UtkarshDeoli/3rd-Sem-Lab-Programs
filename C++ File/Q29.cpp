/*
Create your own exception “MyException” that occurs at the same condition as 
mentioned in program no. 28
*/

#include <iostream>

using namespace std;

// Define custom exception class
class MyException : public exception {
 public:
  const char* what() const throw() {
    return "MyException: Division by zero is not allowed.";
  }
};

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
      throw MyException();
    }
    int result = numerator/denominator;

    // Display result
    cout << "Result: " << result << endl;
  } catch (const MyException& e) {
    cerr << e.what() << endl;
  }

  return 0;
}
