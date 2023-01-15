// E
// E D
// E D C
// E D C B
// E D C B A

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char ch = 65;
    for (int i = 1; i <= n; i++)
    {
        ch = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout << char(ch + n - j) << " ";
        }
        cout << endl;
    }
    return 0;
}