#include <bits/stdc++.h>

using namespace std;
typedef long long int ll ;

ll modexp(ll a, ll b, ll n){
	ll d = 1;
	while(b){
		if(b % 2){
			d = (d * a)%10;
		}
		b >>= 1;
		a = (a * a)%n;
	}
	return d;
}


int main() {
	int T;
	scanf("%d",&T);
	while(T--){
		ll a, b;
		scanf("%lld%lld",&a,&b);
		printf("%lld\n",modexp(a,b,10));
	}
  return 0;
}
