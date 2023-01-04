#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n=0;
    long long a[5001]={0},ans=0;
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    // 以上为输入
    
    for(int i=0;i<n;i++){
        long long sum=0,b=0;

        for(int j=i;j>0;j--){
            sum+=abs(b)/a[j-1]+1;
            b=(abs(b)/a[j-1]+1)*a[j-1];            
        }
        b=0;
        for(int j=i;j<n-1;j++){
            sum+=(b/a[j+1]+1);
            b=(b/a[j+1]+1)*a[j+1];

        }
        if(i) ans=min(ans,sum);
        else ans=sum;
    }
    
    cout<<ans;
    return 0;
}