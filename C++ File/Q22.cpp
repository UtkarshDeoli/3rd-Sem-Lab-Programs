/* If Parent and child classes are there and pointer of parent is referring to the object of 
// child then how virtual destructor of parent plays an important role? Write a program to demonstrate the scenario. */

#include<iostream>  
using namespace std;  
class Base  
{                              
    public: 
        Base() // Constructor function.   
    {  cout<< "\n Constructor Base class";  }  

    ~Base() // Destructor function   
    {   cout<< "\n Destructor Base class";  }  

};  
  
class Derived: public Base  
{  
    public:
        Derived() // Constructor function   
    {  cout << "\n Constructor Derived class" ;  }
    
    ~Derived() // Destructor function   
    {  cout << "\n Destructor Derived class" ; } /* Destructor function is not called to release its space. */ 

};  

int main()  
{  
    Base *bptr = new Derived; // Create a base class pointer object   
       delete bptr; /* delete the space occupied by the destructor.*/  
}    