// Write a program to demonstrate pure virtual functions and abstract classes.
#include<iostream>
using namespace std;

class Base
{
    public:
        int var1;

        virtual void display()=0; // =0 means do nothing 
};

class Derived: public Base
{
    public:
        int var2;

        Derived(int a): Base()
        {
            var2 =a;
        }
        void display()
        {
            cout<<"The value of Var2: "<<var2<<endl;
        }
};


int main()
{
    Derived obj(5);
    
    Base* base_obj[1];
    base_obj[0] = &obj;

    base_obj[0]->display();


}
