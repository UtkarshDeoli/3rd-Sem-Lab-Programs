//Q1.Enter any string and sort it. (Use string class for string handling)
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str; 
    cout<<"Enter A String to be sorted"<<endl;
    cin>>str;
    int x = str.length();

    for(int i =0 ; i< x-1; i++)
    {
        for (int j=0 ; j< x-(i+1); j++)
        {
            if(str.at(j)>str.at(j+1))
            {
                char ch = str.at(j);
                str.at(j)=str.at(j+1);
                str.at(j+1)=ch;
            }
        }

    }
    cout<<str;

}