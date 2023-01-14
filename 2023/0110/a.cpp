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
        string str;
        cin >> str;
        
        int len = str.size();
        
        if (len == 3)
            cout << str[0] << " " << str[1] << " " << str[2] << endl;
        else if (str[0] == str[len - 1])
        {
            cout << str[0] << " ";
            int i = 1;
            for (; i < len - 1; i++) cout << str[i];
            cout << " " << str[len - 1] <<endl;
        }
        else 
        {
            if(str.find('b',1) == len - 1 || str.find('b',1) == len - 1 == -1) cout << ":(" << endl;
            else 
            {
                int i = 0;
                for (; i < str.find('b',1); i++) cout << str[i];
                cout << " ";
                for (; i < len - 1; i++) cout << str[i];
                cout << " ";
                cout << str[len - 1] <<endl;
            }
        }
    }
    return 0;
}