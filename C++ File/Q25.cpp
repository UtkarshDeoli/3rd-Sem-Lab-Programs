/* Write a cpp program to open any existing file like sample.txt then write something in it and 
then read from start and display on console. */

#include <iostream>
#include <fstream>  // Required for file I/O
#include <string>   // Required for strings

using namespace std;

int main() {
  string text;

  // Write text to file
  ofstream outFile("Sample.txt", ios::app);  // Open file in append mode
  cout << "Enter some text to append to the file: ";
  getline(cin, text);
  outFile << text << endl;
  outFile.close();

  // Read text from file and write it back to console
  string line;
  ifstream inFile("Sample.txt");
  while (getline(inFile, line)) {
    cout << line << endl;
  }
  inFile.close();

  return 0;
}
