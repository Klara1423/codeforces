#include<iostream>
#include<string>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n=0;
        string a,b;
        cin>>n>>a>>b;
        for(int i=0;i<n;i++){
            if(a.find("G")!=-1)
                a=a.replace(a.find("G"),1,"B");   
            if(b.find("G")!=-1)        
                b=b.replace(b.find("G"),1,"B");
        }
        if(a.find(b)!=-1) cout<<"yes\n";
        else cout<<"no\n";
    }
    return 0;
}