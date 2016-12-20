#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

inline ll gcd(ll a, ll b){
    return (b == 0)? a:gcd(b, a%b);
}

int main()
{
    ll n, k;
    while(true){
        scanf("%lld%lld",&n,&k);
        if (n == -1 && k == -1){
            break;
        }
        else if(k <= 2){
            printf("0\n");
        }
        else{
            ll nn = (k - 1)/2;
            ll p = nn*k - nn*(nn + 1);

            //cout<< nn << " " << p << endl;

            ll q ;
            if (n & 1){
                q = ( (n - 1)/2 )*n;

            }
            else{
                q = (n/2)*(n-1);
            }

            while(true){
                ll g = gcd(p,q);
                if (g == 1){
                    break;
                }
                p /= g;
                q /= g;

                if(p == 1 || q == 1){
                    break;
                }
            }
            if (q == 1){
                printf("%lld\n",p);
            }
            printf("%lld/%lld\n",p,q);
        }
    }
    return 0;
}
