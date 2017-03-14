/**
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll value[505];
ll weight[505];
ll dp[501][2000001];
ll N, CAP;

ll knapsack(ll i, ll w){
	if(i == N){
		return 0;
	}
	if(dp[i][w] != -1){
		return dp[i][w];
	}
	ll profit1 = 0, profit2 = 0;
	if(w + weight[i] <= CAP){
		profit1 = value[i] + knapsack(i+1, w + weight[i]);
	}
	else{
		profit2 = 0;
	}
	profit2 = knapsack(i+1, w);

	dp[i][w] = max(profit1, profit2);
	return dp[i][w];
}

int main() {
	memset(dp, -1, sizeof dp);
	scanf("%lld %lld", &CAP, &N);
	for(ll i = 0; i < N; i++){
    scanf("%lld %lld",&value[i], &weight[i]);
	}
	cout << knapsack(0, 0) << endl;
	return 0;
}
**/

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll knapsack(vector< ll >value, vector< ll >weight, ll CAP ){
	ll n = value.size();
	vector <ll> dp(CAP+1);
	for(ll i =0; i< n; i++){
		for(ll a = CAP; a >= weight[i]; --a){
			dp[a] = max(dp[a], dp[a - weight[i]] + value[i]);
		}
	}
	return dp[CAP];
}

int main(){
	ll CAP, N;
	scanf("%lld %lld",&CAP, &N);
	vector <ll> value(N), weight(N);

	for(ll i = 0; i < N; i++){
		scanf("%lld %lld",&value[i],&weight[i]);
	}
	printf("%lld\n",knapsack(value, weight, CAP));
	return 0;
}
/**
10 3
7 3
8 8
4 6
*/
