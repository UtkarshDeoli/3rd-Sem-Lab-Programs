/*
6. An array of integers is given, both +ve and -ve. You need to find the two elements such 
that their sum is closest to zero. 
Example: 
int arr[] = {1, 60, -10, 70, -80, 85}; 
For the above array, program should print -80 and 85. 
*/

#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Enter number of elements in array" << endl;
    cin >> n;
    int a[n];
    cout << "Enter elements of array" << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int min = a[0] + a[1];
    int x = 0;
    int y = 1;
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(abs(a[i] + a[j]) < abs(min))
            {
                min = a[i] + a[j];
                x = i;
                y = j;
            }
        }
    }
    cout << "Elements are " << a[x] << " and " << a[y] << endl;
    return 0;
}