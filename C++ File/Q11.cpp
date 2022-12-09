/*Q 11. Write a program to create objects at the time of run. Also, write code to delete objects 
dynamically. */

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
    void display()
    {
        cout<<"age :"<<age<<endl;
        cout<<"Roll :"<<roll<<endl;
        cout<<"Name :"<<name<<endl;
    }
    ~Student()
    {
        cout<<"Dynamically Deleting"<<endl;
    }
};

int main()
{
    Student *s1 = new Student(21, 63 , "Utkarsh Deoli");
    s1->display();
    delete s1;
}