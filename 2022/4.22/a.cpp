#include<iostream>
#include<string>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    getchar();
    while(t--){
        string s;
        getline(cin,s);
        int i=s.size();

        if(i==1||s.find("aba")!=-1||s.find("bab")!=-1||s[0]!=s[1]||s[i-1]!=s[i-2]) cout<<"no\n";            
        else cout<<"yes\n";
    }
    return 0;
}