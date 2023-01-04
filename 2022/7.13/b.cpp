#include<iostream>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n=0,a[26]={0},s=0;
        string str;
        cin>>n>>str;

        for(int i=0;i<str.size();i++){
            int j=str[i]-'A';
            if(a[j]>0) s++;
            else s+=2;

            a[j]++;
        }
        cout<<s<<endl;
    }
    return 0;
}