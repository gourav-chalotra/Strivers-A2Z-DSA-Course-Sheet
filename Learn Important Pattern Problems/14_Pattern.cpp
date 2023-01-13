// A
// AB
// ABC
// ABCD
// ABCDE

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        char a = 65;
        for (int j = 0; j <= i; j++)
        {
            cout << a;
            a++;
        }
        cout << endl;
    }
}