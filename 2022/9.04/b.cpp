#include<iostream>
#include<algorithm>

using namespace std;

typedef long long ll;

const int n = 1e5+5;

void solve(){
	int N,D; cin >> N >> D;
	int P[n]; for(int i=0; i<N; i++) cin >> P[i];
	sort(P,P+N);
	int ans = 0, cnt = 1, sum = N;
	for(int i = N-1; sum>0;){
		if(P[i]*(cnt+1) > D){
			cnt = 0;
			i--;
			sum--;
			ans++;
		}else cnt++, sum--;
	}
	cout << ans;
}

int main(){
	int t;
	// cin >> t;
	t = 1; 
	while(t--) solve();
	return 0;
}
