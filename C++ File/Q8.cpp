/*Write a program to construct objects of a class with provided initial values. Also, 
demonstrate the copy constructor.*/

#include<iostream>
using namespace std;

class Student
{
    public:
    string name;
    int roll;
    int age;
    Student()
    {
        name = "";
        roll = 0;
        age = 0;
    }
    Student(int a , int b , string c)
    {
        age = a;
        roll = b;
        name = c;
    }
    Student(Student &s)
    {
        age = s.age;
        roll = s.roll;
        name = s.name;
    }
    void display()
    {
        cout<<"age :"<<age<<endl;
        cout<<"Roll :"<<roll<<endl;
        cout<<"Name :"<<name<<endl;
    }
};

int main()
{
    Student s1(18 , 50 , "Raju");
    s1.display();
    Student s2(s1);
    s2.display();
    
}