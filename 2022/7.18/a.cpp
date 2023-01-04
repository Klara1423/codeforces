#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n=0,m=0,a[55]={0},b[55]={0},T[55]={0},j=0;
        cin>>n>>m;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(T[a[i]]==0){
                T[a[i]]++;
                b[j++]=a[i];
            }
            if(T[m+1-a[i]]==0){
                T[m+1-a[i]]++;
                b[j++]=m+1-a[i];
            }
        }
        sort(b,b+j);
        for(int i=1,k=0,p=0;i<=m;i++){
            if(p<n){
                if(i==b[k]){
                    cout<<'A';
                    k++;
                    p++;
                }else{
                    cout<<"B";
                }
            }else{
                cout<<"B";
            }
        }
        cout<<endl;
    }
    return 0;
}