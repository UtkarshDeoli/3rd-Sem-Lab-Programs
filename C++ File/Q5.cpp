/*Print a given matrix in spiral form. Example: 
    Input: {{1, 2, 3, 4}, 
            {5, 6, 7, 8}, 
            {9, 10, 11, 12}, 
            {13, 14, 15, 16 }} 
    Output: 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
*/
#include<iostream>

using namespace std;
int main()
{
    cout << "Enter number of matrix" << endl;
    int x;
    int each;
    cin >> x;
    cout << "Enter number of elements in each row" <<endl;
    cin >> each;
    int i = 0;
    int j = 0;
    int a[x][each];
    cout << "Enter elements of matrix" << endl;
    for(i = 0; i < x; i++)
    {
        for(j = 0; j < each; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "Matrix is" << endl;
    for(i = 0; i < x; i++)
    {
        for(j = 0; j < each; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Spiral form of matrix is" << endl;
    int k = 0;
    int l = 0;
    while(k < x && l < each)
    {
        for(i = l; i < each; i++)
        {
            cout << a[k][i] << " ";
        }
        k++;
        for(i = k; i < x; i++)
        {
            cout << a[i][each - 1] << " ";
        }
        each--;
        if(k < x)
        {
            for(i = each - 1; i >= l; i--)
            {
                cout << a[x - 1][i] << " ";
            }
            x--;
        }
        if(l < each)
        {
            for(i = x - 1; i >= k; i--)
            {
                cout << a[i][l] << " ";
            }
            l++;
        }
    }
    return 0;
}