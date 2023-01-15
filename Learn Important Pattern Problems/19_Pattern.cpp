// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********
#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int k = 1;
    for (int i = 0; i < n * 2; i++)
    {
        if (i < n)
        {
            for (int j = 0; j < n * 2; j++)
            {
                if (i > 0 && i < n * 2 - 1)
                {
                    if (j >= n - i && j < n + i)
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
        }
        else
        {
            for (int l = 0; l < n * 2; l++)
            {
                if (l >= k && l < n * 2 - k)
                {
                    cout << " ";
                }
                else
                {
                    cout << "*";
                }
            }
            k++;
        }
        cout << endl;
    }
    return 0;
}