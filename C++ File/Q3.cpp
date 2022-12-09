/*  
    Enter 10 numbers and do the following operations using functions: 
        a. sorting 
        b. searching 
        c. deletion 
        d. updation
*/

#include<iostream>
using namespace std;

void display(int arr[])
{
    for(int i =0; i<10; i++)
    {
        cout<<arr[i]<<endl;
    }
}

void sorting(int arr[])
{
    int i, j;
    int n =10;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}

int searching(int arr[] , int temp)
{
    int n =10;
    for(int i =0; i<n-1 ; i++)
    {
        if(arr[i]==temp)
            {   
                cout<<"Found at : "<< i<<endl;
                return i;
                }
    }
    return -1;
}

int deletion(int arr[],int temp )
{
    int n =10;
    int index = searching(arr , temp);
    cout<<"Deleting it"<<endl;
    for (int i = index ; i<n-2 ; i++)
    {
        arr[i]= arr[i+1];
    }
    arr[n]=0;
}
int update(int arr[] , int temp , int index)
{
    arr[index] = temp;
}

int main()
{
    int arr[10];
    for(int i =0 ; i<10 ; i++)
    {
        cout<<"Enter Element "<<i<<" :"<<endl;
        cin>>arr[i];
    }
    cout<<"Shorting :"<<endl;
    sorting(arr);
    display(arr);
    int temp ;
    cout<<"Enter Element to search :"<<endl;
    cin>>temp;
    searching(arr , temp );
    cout<<"Enter Element to Delete :"<<endl;
    cin>>temp;
    deletion(arr , temp);
    display(arr);
    cout<<"Enter Index to be Updated :"<<endl;
    cin>>temp;
    int x;
    cout<<"Enter Element to be Inserted to Index "<<x<<endl;
    cin>>x;
    update(arr , x ,temp);
    display(arr);
}