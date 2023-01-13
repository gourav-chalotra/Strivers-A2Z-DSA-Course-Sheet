// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int bi = 1;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            bi = 0;
        }
        else
        {
            bi = 1;
        }
        for (int j = 1; j <= i; j++)
        {
            cout << bi<<" ";
            if (bi == 0)
            {
                bi = 1;
            }
            else
            {
                bi = 0;
            }
        }
        cout << endl;
    }
    return 0;
}