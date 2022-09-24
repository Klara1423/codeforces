#include<iostream>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        if((a[0]=='y'||a[0]=='Y')&&(a[1]=='e'||a[1]=='E')&&(a[2]=='s'||a[2]=='S')){
            cout<<"yes\n";
        }else{
            cout<<"no\n";
        }
    }
    return 0;
}