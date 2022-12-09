/*Q9. Write a program that counts the total number of objects created for any given class. */

#include<iostream>

using namespace std;
int x= 0;
class test
{
    public:
    test()
    {
        x++;
    }
};

int main()
{
    test t1;
    test t2;
    test t3;
    test t4;
    cout<<"No of object created :"<<x<<endl;
}