/*12. Write a program to overload the ++ operator for the following scenario. 
Class A 
Attributes are as follows: int a=1, b=2, c=3. 
Overload the ++ operator (for both prefix and postfix) so that when you apply it to an 
object of class A, it increases the values of all attributes by one. For this example, the 
answer will be 
a=2, b=3 and c=4 
*/
#include<iostream>
using namespace std;

class pyro
{
private:
    int x,y,z;
public:
    pyro(int a,int b,int c){x=a;y=b;z=c;}
    void show()
    {
        cout<<x<<"    "<<y<<"    "<<z<<"    "<<endl;
    }
    void operator ++()//prefix
    {
        ++x;
        ++z;
        ++y;
    }
    void operator ++ (int)//postfix
    {
        x++;
        z++;
        y++;
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