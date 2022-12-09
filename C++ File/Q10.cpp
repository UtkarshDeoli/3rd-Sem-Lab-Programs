/*Q 10. If you want to access private members of a class, then what are the options? Use 
examples to demonstrate.*/
#include<iostream>
using namespace std;

class Circle
{
    private:
        double radius;
    public:
        void area(double r)
        {
            radius = r;
            double area = radius*radius*3.147;
            cout << "Radius set to: " << radius << endl;
            cout << "Area is: " << area<<endl;
        }
        int give_radius()
        {
            return (radius);
        }
    Circle()
    {
        radius = 0;
    }
    Circle(int x)
    {
        radius = x;
    }
};

int main()
{
    Circle c1(10);
    cout<<"Old Radius is :"<<c1.give_radius()<<endl;
    c1.area(15);
    cout<<"New Radius :"<<c1.give_radius()<<endl;
    
}