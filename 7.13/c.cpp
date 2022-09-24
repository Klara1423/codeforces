#include<iostream>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n=0,a[101]={0};
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
            a[i]+=10;
        }

        for(int i=0;i<n;i++){
            int b=0;
            string str;
            cin>>b>>str;
            for(int j=0;j<b;j++){
                if(str[j]=='D') a[i]++;
                else if(str[j]=='U') a[i]--;
            }
        }
        for(int i=0;i<n;i++){
            cout<<a[i]%10<<" ";
        }cout<<endl;
    }
    return 0;
}