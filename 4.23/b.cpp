#include<iostream>
#include<string>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int len=str.size();
        int a=0,b=0,flag=0;
        for(int i=0;i<len;i++){
            if(str[i]=='A') a++;
            else b++;

            if(b>a) flag=1;
        }

        if(len==1||str[0]=='B'||str[len-1]=='A'||flag==1) cout<<"no\n";
        else cout<<"yes\n";
    }
    return 0;
}