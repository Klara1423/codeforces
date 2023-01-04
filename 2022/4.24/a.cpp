#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n=0,a[100][2]={0},b[10]={0},c[10]={0},sum=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i][0]>>a[i][1];
            if(b[a[i][1]-1]==0){
                sum+=a[i][0];
                b[a[i][1]-1]++;
                c[a[i][1]-1]=i;
            }else if(b[a[i][1]-1]>0){
                sum=sum-a[c[a[i][1]-1]][0]+max(a[i][0],a[c[a[i][1]-1]][0]);
                c[a[i][1]-1]= a[i][0]>a[c[a[i][1]-1]][0]?i:c[a[i][1]-1];
            }
        }

        int flag=0;
        for(int i=0;i<10;i++){
            if(b[i]==0) flag=1;
        }

        if(flag) cout<<"MOREPROBLEMS\n";
        else cout<<sum<<endl;
    }
    return 0;
}