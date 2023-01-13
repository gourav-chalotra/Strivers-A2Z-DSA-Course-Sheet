//     *
//    * *
//   * * *
//  * * * *
// * * * * *
// * * * * *
//  * * * *
//   * * *
//    * *
//     *
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int print, k = 1;
    for (int i = 1; i <= n * 2; i++)
    {
        print = 1;
        if (i <= n)
        {
            for (int j = 1; j <= n + i - 1; j++)
            {
                if (j >= n - i + 1 && print)
                {

                    cout << "*";
                    print = 0;
                }
                else
                {
                    cout << " ";
                    print = 1;
                }
            }
        }
        else
        {
            for (int l = 1; l <= n * 2 - k; l++)
            {
                if (l >= k && print)
                {
                    cout << "*";
                    print = 0;
                }
                else
                {
                    cout << " ";
                    print = 1;
                }
            }
            k++;
        }
        cout << endl;
    }
    return 0;
}