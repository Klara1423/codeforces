#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;

    while (t--){
        int n = 0;
        cin >> n;

        if (n % 2 == 0)
        {
            cout << "YES" << endl;
            for(int i = 0 ; i < n / 2; i++)
            {
                cout << "1 -1 ";
            }
            cout << endl;
        }
        // else if (n == 5) 
        //     cout << "1 -2 1 -2 1" << endl;
        // else 
        //     cout << "NO" << endl;
        else if (n == 3) 
            cout << "NO" << endl;
        else 
            {
                int a = n / 2 - 1, b = -a - 1;
                for(int i = 0 ; i < n / 2; i++)
                {
                    cout << a << " " << b << " ";
                }
                cout << a << endl;
            }
    }
    return 0;
}