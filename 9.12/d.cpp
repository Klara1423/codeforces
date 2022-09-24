#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t = 0;
    cin >> t;
    while (t--){
        int n = 0, x[10] = {0}, y[10] = {0}, z[10] = {0};
        cin >> n;
        for (int i = 0; i < n; i++) cin >> x[i];
        for (int i = 0; i < n; i++){
            cin >> y[i];
            z[i] = y[i] -x[i];
        }
        sort(z,z+n);
        int l = 0, r = n - 1, s = 0;
        while (l < r){
            if (z[r] + z[l++] >= 0){
                s++;
                r--;
            }            
        }
        cout << s <<endl;
    }
    return 0;
}