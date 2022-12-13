// Write a program having a number of sum () methods which are used to sum the provided
// arguments. Also write a show() method to show the result.

#include<iostream>
using namespace std;

class Addition
{
    public:
        
        int result;

        void sum(int a)
        {
            result = a;
        }
        void sum(int a, int b)
        {
            result = a + b;
        }
        void sum(int a, int b, int c)
        {
            result = a + b + c;
        }

        void show()
        {
            cout<<"The sum is: "<<result<<endl;
        }
};


int main()
{
    Addition a1, a2;
    a1.sum(1,3);
    a1.show();

    a2.sum(5);
    a2.show();

}