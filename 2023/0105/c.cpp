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
        int n = 0, a[N] = {0}, b[N] = {0}, tong[N] = {0}, tong_[N] = {0}, flag = 0;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
            tong[a[i]]++;
            tong_[a[i]]++;
            if (a[1] > 2) flag = 1; 
        }

        sort(b,b + n);
        for (int i = 0; i < n; i++)
            if (b[i] < i) 
                flag = 1;
        
        if (flag == 1)
        {
            cout << "NO" << endl;
            continue;
        }
        else
        {
            cout << "YES" << endl;
            
            int x[N] = {0}, y[N] = {0};
            for (int i = 0; i < n; i++)
            {
                if(tong[i] == 2)
                {
                    x[i] = a[i];
                    tong[i]--;
                }
                else if (tong[i] == 1)
                {
                    if (tong_[i] == 2)
                    {
                        y[i] = a[i];
                        tong[i]--;
                    }
                    else
                    {
                        x[i] = a[i];
                        tong[i]--;
                    }
                }
            }
        }
        
        for (int i = 0; i < n; i++)
        {
            
        }
        for (int i = 0; i < n; i++)
        {
            
        }
        

    }
    return 0;
}