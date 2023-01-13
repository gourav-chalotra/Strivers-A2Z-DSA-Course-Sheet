// 1                 1 
// 1 2             2 1
// 1 2 3         3 2 1
// 1 2 3 4     4 3 2 1
// 1 2 3 4 5 5 4 3 2 1
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int max;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n * 2; j++)
        {
            if (j <= i)
            {
                cout << j << " ";
                max = j;
            }
            else if (j > i && j <= n * 2 - i)
            {
                cout << "  ";
            }
            else
            {
                cout << max << " ";
                max--;
            }
        }
        cout << endl;
    }
    return 0;
}