# [Codeforces Round #842 (Div. 2)](https://codeforces.com/contest/1768)

## [A. Greatest Convex](https://codeforces.com/contest/1768/problem/a)

### 思路

贪心、数学、数论
输出 $k$，满足 $1< x < k$ 和 $(x! + (x - 1)!) \% k == 0 $
$x! + (x - 1)! = (x + 1) \cdot (x - 1)!$，令 $x + 1 = k$ 即可

### 代码

```cpp
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;

    while (t--)
    {
        int k = 0;
        cin >> k;
        cout << k - 1 << endl;
    }
    return 0;
}
```

## [B. Quick Sort](https://codeforces.com/contest/1768/problem/B)

### 思路

贪心、数学
找从$1$开始已经排好序的个数 m，只要把剩下的排后面就好了
ans = $\frac{n - m}{k}$ （有小数取整加一）

### 代码

```cpp
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
```

## [C. Elemental Decompress](https://codeforces.com/contest/1768/problem/C)

### 思路

贪心、排序
NO:

- 出现次数 $>2$
- 排序后，a[i] < i
YES:
第一处出现放x[i]，第二次出现放y[i]
最后输出时是0的处理一下

### 代码
