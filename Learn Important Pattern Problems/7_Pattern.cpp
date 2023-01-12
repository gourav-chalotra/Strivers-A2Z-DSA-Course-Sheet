//     *    
//    ***   
//   *****  
//  ******* 
// *********

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n*2-1; j++)
    //     {
    //         if (j >= n - i - 1 && j <= n + i - 1)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    // Secound method to print pattern

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n+i; j++)
        {
            if (j >= n - i - 1 && j <= n + i - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}