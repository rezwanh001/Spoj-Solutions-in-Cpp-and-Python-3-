#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll gcd(ll a, ll b){
	return b == 0?a:gcd(b, a%b);
}
ll lcm(ll a, ll b){
	return ((a*b)/gcd(a, b));
}
int main() {
	ll T;
	scanf("%lld",&T);
	while(T--){
		ll a, b;
		scanf("%lld%lld",&a,&b);
		ll lcms = lcm(a, b);
		cout<< lcms/a << " " << lcms/b << endl;
	}
	return 0;
}



