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
            if(str[i]!=str[i+1]) s++;
        }
        cout<<s<<endl;
    }
    return 0;
}