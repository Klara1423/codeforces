#include<iostream>
#include<string>
using namespace std;
int main(){
	int t=0;
	cin>>t;
	while(t--){
		int n=0,k=0;
		string a;
		int b[200005]={0};
		cin>>n>>k;//k奇动1，k偶动20
		cin>>a;
		int j=0,p=k%2;
		for(int i=0;i<n;i++){
			if(a[i]-'0'==p&&j<k){
				b[i]++;
				j++;
			}	
		}
		b[n-1]+=k-j;
		for(int i=0;i<n;i++){
			if(b[i]%2==p) cout<<a[i];
			else cout<<!(a[i]-'0');	
		}
		cout<<endl;
		for(int i=0;i<n;i++){
			cout<<b[i]<<' ';
		}
		cout<<endl;
	}
	return 0;
}
/*

#include<cstdio>
using namespace std;
const int N=2e5+3;
int T,n,k;bool b[N];char s[N];
int main(){
	scanf("%d",&T);
	while(T--){
		scanf("%d%d %s",&n,&k,s);
		if(k&1) for(int i=0;i<n;++i) s[i]^=1;
		for(int i=0;i<n;++i)
			if(s[i]&1||!k) b[i]=0;
			else ++s[i],b[i]=1,--k;
		if(k&1) --s[n-1];
		printf("%s\n",s);
		for(int i=0;i<n-1;++i) printf("%d ",b[i]);
		printf("%d\n",b[n-1]+k);
	}
	return 0;
}
*/