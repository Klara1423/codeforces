#include <iostream>
#include <algorithm>
#include <string>
#define N 200005
using namespace std;
int main()
{
    int t = 0;
    cin >> t;

    while (t--)
    {
        int n = 0, a[N] = {0}, tong[N] = {0}, flag = 0;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            tong[a[i]]++;
            if (a[1] > 2) flag = 1; 
        }

        if (a[1] == 2) flag = 1; 

        if (flag == 0) cout << "YES" << endl;
        else if (flag == 1) cout << "NO" << endl;

        int x[N] = {0}, y[N] = {0};
        for (int i = 0; i < n; i++)
        {
            
        }

    }
    return 0;
}