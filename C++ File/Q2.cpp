//Q2.Create an array of ten names and sort them. (Use string class for string handling)

#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    cout<<"Enter 10 Names :"<<endl;
    string s[10];
    for(int i=0;i<10;i++)
        cin>>s[i];
    sort(s,s+10);
    for(int i=0;i<10;i++)
        cout<<s[i]<<"   ";
}
