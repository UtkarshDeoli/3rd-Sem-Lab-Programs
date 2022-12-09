/*Q13. Overload the binary operator + to add the integer attribute values of two objects. */

#include<iostream>
using namespace std;

class pyro
{
private:
    int x,y,z;
public:
    pyro(int a,int b,int c){x=a;y=b;z=c;}
    void operator +()//prefix
    {
          
    }

};

int main()
{
    pyro py(100,100,100);
    py.show();
    ++py;
    py.show();
    py++;
    py.show();
}