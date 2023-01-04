#include<iostream>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n=0,a[5]={0};
        string str;
        cin>>n>>str;
        for(int i=0;i<n;i++){
            if(str[i]=='T') a[0]++;
            else if(str[i]=='i') a[1]++;
            else if(str[i]=='m') a[2]++;
            else if(str[i]=='u') a[3]++;
            else if(str[i]=='r') a[4]++;
        }
        if(a[0]==1&&a[1]==1&&a[2]==1&&a[3]==1&&a[4]==1) cout<<"yes\n";
        else cout<<"no\n";
        
    }
    return 0;
}