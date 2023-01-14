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
        int n = 0, m = 0, j = 1, k = 0, a[N] = {0};
        cin >> n >> k;

        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
            if(a[i] == j) 
            {
                m++;
                j++;
            }    
        }
        
        int ans = (n - m) * 1.0 / k > (n - m) / k ?  (n - m) / k + 1 :  (n - m) / k;
        cout << ans << endl;    
    }
    return 0;
}