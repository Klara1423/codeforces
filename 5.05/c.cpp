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
        if(len==1) cout<<"1\n";
        else if(str.find('0')==-1&&str.find('1')==-1) cout<<len<<endl;
        else{
            int s=0,n=len-1;
            if(str.find('0')!=-1) n=str.find('0');
            
            for(int i=n;i>=0;i--,s++){
                if(str[i]=='1'){
                    s++;
                    break;
                }
            }
            cout<<s<<endl;
        }
    }
    return 0;
}