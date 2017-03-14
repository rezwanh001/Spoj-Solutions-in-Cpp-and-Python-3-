#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
  ll T;
  scanf("%lld",&T);
  while(T--){
		ll n;
		char s[255];
		scanf("%lld %s",&n, s);
		if(n == 0){
			printf("%s\n",s);
		}
		else{
			ll mod = 0, j = 0;
			while(s[j] != '\0'){
        mod = ( mod*10 + (s[j] - 48) )%n;
        j++;
			}
			printf("%lld\n", __gcd(n, mod));
		}
  }
	return 0;
}
