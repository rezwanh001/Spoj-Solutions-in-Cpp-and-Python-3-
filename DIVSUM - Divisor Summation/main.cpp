#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
  ll T;
  scanf("%lld",&T);
  while(T--){
		ll n;
		scanf("%lld",&n);
		if(n == 1){
			printf("0\n");
		}
		else{
			ll t = sqrt(n);
			ll ans = 0;
			for(ll i = 2; i <= t; i++){
				if(n % i == 0){
					if(i == n/i){
						ans += i;
					}
					else{
						ans += i + n/i;
					}
				}
			}
			ans += 1;
			printf("%lld\n",ans);
		}
  }
  return 0;
}
