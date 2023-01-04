#include<iostream>
#include<string>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n=0,s=0;
        string str;
        cin>>n>>str;
        for(int i=0;i<n;i+=2){
            if(str[i]!=str[i+1]){
                s++;
                if((str[i+1]!=str[i+2])||(str[i+1]==str[i+2]&&str[i+1]!=str[i+3]))
                str[i]==str[i+1];
            }
        }
        cout<<s<<endl;
    }
    return 0;
}