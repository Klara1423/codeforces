#include<iostream>
#include<string>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        string str;
        cin>>str;

        if(str[0]+str[1]+str[2]==str[3]+str[4]+str[5]) cout<<"yes\n";
        else cout<<"no\n";
    }
    return 0;
}