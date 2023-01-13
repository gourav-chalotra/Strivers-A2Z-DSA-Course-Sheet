// ABCDE
// ABCD
// ABC
// AB
// A

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n)
    {
        char ch = 65;
        for (int i = 0; i < n; i++)
        {
            cout << ch++;
        }
        cout << endl;
        n--;
    }
    return 0;
}