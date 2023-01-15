//    A
//   ABA
//  ABCBA
// ABCDCBA

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char ch;
    for (int i = 0; i < n; i++)
    {
        ch = 65;
        for(int j = 0; j <= n+i-1; j++)
        {
            if(j>=n-i-1)
            {
                if(j >= n-1)
                {
                    
                    cout << ch;
                    --ch;
                }
                else
                {
                    cout << ch ;
                    ch++; 
                }
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    
    return 0;
}