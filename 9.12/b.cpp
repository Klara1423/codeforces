#include <iostream>
using namespace std;
int main(){
    int t = 0;
    cin >> t;
    while (t--){
        int q = 0;
        string a, s;
        cin >> q >> a;
        
        for (int i = q - 1; i >= 0; ){
            if(a[i] == '0'){
                s += (char(int(a[i - 2] - '0') * 10 + int(a[i - 1] - '0')) + 'a' );
                i-=3;
            }else {
                s += (char(int(a[i] - '0')) + 'a' );
                i--;
            }
        }
        for (int i = s.size() - 1; i >= 0; i--){
            cout << char(int(s[i]) - 1);
        }cout << endl;
    }
    return 0;
}