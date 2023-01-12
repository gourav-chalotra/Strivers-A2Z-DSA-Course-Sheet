/*
1
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j <= i)
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
    return 0;
}
