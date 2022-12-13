// Write a Base class having two attributes int x, int y. Write child class having void
// sum(int x, int y) function to add two provided values. You have to initialize base class’s
// attributes with the help of child class object and then use sum method to add the values.
// Also write a show() method in child to show the result.

#include<iostream>
using namespace std;

class base
{

    public:
    int x;
    int y;
    int add;
    base(int a, int b)
    {
        x=a;
        y=b;
    }
    void sum(void)
    {
        add = x+y;
    }

};

class child: public base
{
    private:

    public:
    child(int a, int b):base(a,b)
    {

    }

    void show()
    {
        cout<<"The sum is : "<<add;
    }
    
};



int main()
{
    child c1(5, 6);
    c1.sum();
    c1.show();
    
}