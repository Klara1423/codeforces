#include<iostream>
#include<string>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    b:
    while(t--){
        string str;
        cin>>str;
        int len=str.size(),a[26]={0},s=0;
        for(int i=0;i<len;i++){
            a[str[i]-97]++;
        }
        for(int i=0;i<26;i++){
            if(a[i]) s++;
        }
        for(int i=0;i<26;i++){
            if(a[i]==len){
                break;
            }else if(a[i]>=2){
                int f=str.find(char(i+97));
                for(int j=f;j<len;j++){
                    for(int k=1;k<s;k++){
                        if(f+k<len){
                            if(str[f]==str[f+k]){
                                cout<<"no\n";
                                goto b;
                            }                                
                        }else break;  
                    }
                    f=str.find(char(i+97),f+1);
                }
            }
        }
    cout<<"yes\n";    
    }
    return 0;
}