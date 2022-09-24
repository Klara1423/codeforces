#include <iostream>
using namespace std;
int main(){
    int t = 0;
    cin >> t;
    while (t--){
        int a = 0, b = 0, c = 0;
        cin >> a >> b >> c;

        int d = abs(b - c) + c;
        if (a > d) cout << 2 << endl;
        else if (a == d) cout << 3 << endl;
        else cout << 1 << endl;
    }
    return 0;
}