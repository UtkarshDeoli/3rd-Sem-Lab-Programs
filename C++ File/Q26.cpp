/* Write a cpp function sum(argument 1, argument 2) that can take any type of two arguments 
and add them. Write a program also to demonstrate. */

#include <iostream>

using namespace std;
// Function template for sum
template <typename T>
T sum(T a, T b) {
  return a + b;
}

int main() {
  // Demonstrate sum function with various types
  cout << sum(1, 2) << endl;  // 3
  cout << sum(3.14, 2.72) << endl;  // 5.86
  cout << sum(true, false) << endl;  // 1
  cout << sum('a', 'b') << endl;  // 195
  cout << sum(string("hello"), string("world")) << endl;  // "helloworld"

  return 0;
}
