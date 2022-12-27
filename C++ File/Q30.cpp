/* 
Create a vector and add five elements. Display all the elements, add a new element in 
last, show the capacity, remove from last, show the size, add element at start and 3rd
position, remove all elements and then show the capacity again.
*/

#include <iostream>
#include <vector>  // Required for vectors

using namespace std;

int main() {
  // Create vector and add five elements
  vector<int> v = {1, 2, 3, 4, 5};

  // Display all elements
  cout << "Elements:";
  for (int i : v) {
    cout << " " << i;
  }
  cout << endl;

  // Add new element at the end
  v.push_back(6);
  cout << "Added element at the end." << endl;

  // Display capacity
  cout << "Capacity: " << v.capacity() << endl;

  // Remove element from the end
  v.pop_back();
  cout << "Removed element from the end." << endl;

  // Display size
  cout << "Size: " << v.size() << endl;

  // Add element at the start and 3rd position
  v.insert(v.begin(), 0);
  v.insert(v.begin() + 2, 3);
  cout << "Added elements at the start and 3rd position." << endl;

  // Remove all elements
  v.clear();
  cout << "Removed all elements." << endl;

  // Display capacity
  cout << "Capacity: " << v.capacity() << endl;

  return 0;
}
