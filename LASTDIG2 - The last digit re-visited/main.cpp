#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll modEx(ll x ,ll n, ll p = 10){
	ll ans = 1, tmp = x%p;

	while(n){
		if(n & 1){
			ans = (ans*tmp)%p;
		}
		n >>= 1;
		tmp = (tmp*tmp)%10;
	}
	return ans;
}

ll modEx1(ll a, ll b){
	if(b == 0){
		return 0;
	}
	else{
		a %= 10;
		b %= 4;
		if( b == 0){
			b = 4;
		}
		return ll(pow(a,b))%10;
	}
}

int main(){
	ll T;
	scanf("%lld",&T);
	for(ll cas = 1; cas <= T; cas++){
		ll b;
		string a;
		cin >> a;
		scanf("%lld",&b);

		ll c = a[a.length() - 1] - '0';
		//cout << c << endl;

		printf("%lld\n", modEx(c,b));

	}
  return 0;
}
