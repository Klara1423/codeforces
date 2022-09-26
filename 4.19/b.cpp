#include<iostream>
#include<algorithm>
using namespace std;

int func(int n,int m){
	int a[100001];
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);

	int s=0;
	for(int i=0;i<n;i++){
		s+=a[i]+1;
		if(s+a[n-1]-a[0]>m) return 0;
	}
	return 1;
}

int main(){
	int t=0;
	cin>>t;
	while(t--){
		int n=0,m=0;
		cin>>n>>m;
		if(func(n,m)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}