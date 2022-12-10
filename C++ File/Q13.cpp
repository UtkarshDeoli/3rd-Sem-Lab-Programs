/*Q13. Overload the binary operator + to add the integer attribute values of two objects. */

#include<iostream>
using namespace std;

class pyro
{
private:
    int x;
public:
    pyro(int a){x=a;}
    int operator + (pyro &p)
    {
          return(x + (p.x));
    }

};

int main()
{
    pyro py(100);
    pyro px(200);
    cout<<"The sum is :"<<py+px<<endl;
}