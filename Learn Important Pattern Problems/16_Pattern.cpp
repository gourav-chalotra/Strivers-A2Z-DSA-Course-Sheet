// A
// BB
// CCC
// DDDD
// EEEEE
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char c = 65;
    for(int i = 0; i < n ;i++)
    {
        for(int j = 0; j <= i; j++)
        {
            cout << c;
        }
        c++;
        cout << endl;
    }

    return 0;
}