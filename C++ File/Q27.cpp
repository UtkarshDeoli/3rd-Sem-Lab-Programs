/* Overload generic function sum() as given in program no. 26 with three arguments. */

#include <iostream>

using namespace std;

// Function template for sum with two arguments
template <typename T>
T sum(T a, T b) {
  return a + b;
}

// Function template for sum with three arguments
template <typename T>
T sum(T a, T b, T c) {
  return a + b + c;
}

int main() {
  // Demonstrate sum function with various types and number of arguments
  cout << sum(1, 2) << endl;  // 3
  cout << sum(3.14, 2.72) << endl;  // 5.86
  cout << sum(true, false) << endl;  // 1
  cout << sum('a', 'b', 'c') << endl;  // 291
  cout << sum(string("hello"), string("world"), string("!")) << endl;  // "helloworld!"
  cout << sum(1, 2, 3) << endl;  // 6

  return 0;
}
