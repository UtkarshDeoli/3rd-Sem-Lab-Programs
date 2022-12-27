/*
Write a program to read text from keyboard then write to some text file like 
“Sample.txt”. Then read this content and write back to console.
*/

#include <iostream>
#include <fstream>  // Required for file I/O
#include <string>   // Required for strings

using namespace std;
int main() {
  string text;
  
  // Read text from keyboard
  cout << "Enter some text: ";
  getline(cin, text);

  // Write text to file
  ofstream outFile("Sample.txt");
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