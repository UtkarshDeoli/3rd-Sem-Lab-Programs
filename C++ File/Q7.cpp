/*
     Write a class for the following scenario and run it. 
    The employees have four attributes: id, name, salary, and company name. Initialize id, 
    name, and salary at the time of object creation. The list of methods is given as void setID(int) - to set the employee’s ID. 
    void setName(string) - to set the employee’s name 
    void setSalary(int) - to set the employee’s salary.
    void setCompany_name(string)- to set the employee’s company name 
    int getId()-to get the employee’s id 
    string getName()-to get the employee’s name. 
    int getSalary()-to get the employee’s salary. 
    string getCompany_name()-to get the employee’s company name. 
    If employees are considered from the same company, then use an efficient memory 
    management technique to handle company name. 
*/

#include<iostream>
using namespace std;

class Employee
{
public:
    int id;
    int salary;
    string name,company_name;

    Employee(int i , string n , int sal , string com)
    {
        id = i;
        name = n;
        salary = sal;
        company_name = com;
    }

    void setId(int x)
    {
        id =x;
    }

    void setName(string str)
    {
        name = str;
    }

    void setSalary(int x)
    {
        salary = x;
    }
    void setCompany_Name(string str)
    {
        company_name=str;
    }

    int getId()
    {
        return id;
    }
    int getSalary()
    {
        return salary;
    }
    string getName()
    {
        return name;
    }
    string getCompany_Name()
    {
        return company_name;
    }
    ~Employee(){}
};


int main()
{
    Employee obj(0 ,"",0,"");
    int x ,y; string str,st;
    cout<<"Please Enter your Name :"<<endl;
    cin>>str;
    obj.setName(str);
    cout<<"Please Enter your Id :"<<endl;
    cin>>x;
    obj.setId(x);
    cout<<"Please Enter your Salary :"<<endl;
    cin>>y;
    obj.setSalary(y);
    cout<<"Please Enter your Company Name :"<<endl;
    cin>>st;
    obj.setCompany_Name(st);
    cout<<"Your Name :"<<obj.getName()<<endl;
    cout<<"Your Id :"<<obj.getId()<<endl;
    cout<<"Your Sal :"<<obj.getSalary()<<endl;
    cout<<"Your Company Name :"<<obj.getCompany_Name()<<endl;
    cout<<endl;
}
