#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	ll T;
	scanf("%lld",&T);
	while(T--){
		ll sm = 0;
		ll n;
		scanf("%lld",&n);
		while(n){
			sm += n/5;
			n /= 5;
			//cout<< sm << endl;
		}
		//printf("%lld\n",&sm);
		cout<< sm << endl;
	}
	return 0;
}
