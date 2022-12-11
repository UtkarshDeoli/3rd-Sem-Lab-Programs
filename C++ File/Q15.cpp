// Create base class with attributes name, age and roll_number. Consider name as private,
// age as protected, and roll_number as public. Write various child programs that inherit
// base class in different access modes like private protected and public and show the
// accessibility of various attributes.

#include<iostream>
using namespace std;

class base
{
    // private cannot be accessed by the child
    private:
    string name;


    protected:
    int age;
    
    public:
    int roll_number;

    void set()
    {
        cout<<"Enter Details: "<<endl;
        cin>>name;
        cin>>age;
        cin>>roll_number;
    }

    void display()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Roll No : "<<roll_number<<endl;
    }
};

class child1 : private base{
    

};


class child2 : protected base{

};


class child3 : public base{

};

int main()
{
    // child1 c1;
    // c1.set();             Cannot access as it is inherited private visibility mode
    // c1.display();

    // child2 c2;
    // c2.set();             Cannot access as it is inherited protected visibility mode
    // c2.display();

    child3 c3;
    c3.set();
    c3.display();
    