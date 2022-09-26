#include<iostream>
#include<string>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n=0,f=0,s=0,b=0,r=0;
        string str;
        char a;
        cin>>n>>str;
        // cin>>str;
        // n=str.size();
        //以上为输入

        for(int i=0;i<n;i++){
            if(str[i]=='W'){
                if(b==0&&r>0||r==0&&b>0){
                    f=1;
                    break;
                }
                a=0;
                b=0;
            }else{
                if(str[i]=='B') b++;
                if(str[i]=='R') r++;
            }
            
        }
        if(str.find('B')==-1&&str.find('R')==-1) cout<<"yes\n";
        else if(f) cout<<"no\n";
        else cout<<"yes\n";
    }
    return 0;
}