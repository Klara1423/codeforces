#include <iostream>
using namespace std;
int main(){
    int t = 0;
    cin >> t;
    while (t--){
        int n = 0, cnt[21] = {0}, m = 0, p = 0;
        cin >> n;
        for (int i = 0; i < n; i++){
            cin >> cnt[i];
            if (cnt[i] > m){
                m = cnt[i];
                p = i;
            }
        }
        cout << p+1 << endl;
    }
    return 0;
}