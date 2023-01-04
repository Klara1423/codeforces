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
        string str;
        cin >> n >> str;
        
        if (str.find("RL") != -1) cout << "0" << endl;
        else if (str.find("LR") != -1) cout << str.find("LR") + 1<< endl;
        else cout << "-1" << endl;

        // cout << "唉嘿\n";
    }
    return 0;
}