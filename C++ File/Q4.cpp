//Write a program to check whether a given string is a palindrome?

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string str;
    cout<<"Enter a String :"<<endl;
    cin>>str;
    int len = str.length();
    int flag = 0;
    for ( int i = 0 ; i < (len/2); i++)
    {
        if (str.at(i)!=str.at((len-1)-i))
        {
            flag = -1;
        }
    }
    if( flag == -1)
        cout<<"Not Palindrome"<<endl;
    else
        cout<<"Palidrome"<<endl;
}