// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int k = n;
    for(int i = 0; i < n*2-1 ;i ++)
    {
        for(int j = 0; j < n*2; j++)
        {
            if(i<n-1)
            {
                if(j>i && j < n*2 -i-1)
                {
                    cout << " ";
                }
                else
                {
                    cout << "*";
                }
            }
            else if(i > n-1)
            {
                if(j>i)
                {
                    cout << "*";
                }
                else if(j >= k-1)
                {
                    cout << " ";
                }
                else
                {
                    cout << "*";
                }
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
        if(i>n-1)
        {
            k--;
        }
    }
}