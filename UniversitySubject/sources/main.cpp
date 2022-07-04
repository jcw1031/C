#include <iostream>
#include <map>
using namespace std;

long long N, P, Q;
map<long long, long long> dp;

long long dfs(long long x) {

	if (dp.find(x) != dp.end()) return dp[x];
	return dp[x] = dfs(x / P) + dfs(x / Q);
}

int main(void) {
    cout<<dp[0]<<endl;
	cin.tie(0), ios_base::sync_with_stdio(0);
	cin >> N >> P >> Q;
	dp[0] = 1;
    
    if(N == 1) cout<<dp[0];
    else cout << dfs(N/P)+dfs(N/Q);
}