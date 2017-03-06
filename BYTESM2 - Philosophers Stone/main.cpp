#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll SZ = 1234567;
ll h, w;
ll mat[100+5][100+5];
ll dp[100+5][100+5];

ll solve() {
    memset(dp,0,sizeof dp);

    for(ll j=0; j<w; j++) {
        dp[0][j] = mat[0][j];
    }

    for(ll i=0; i<h-1; i++) {
        for(ll j=0; j<w; j++) {
            if(j>0) {
                dp[i+1][j-1] = max(dp[i+1][j-1], dp[i][j] + mat[i+1][j-1]);
            }
            if(j<w) {
                dp[i+1][j+1] = max(dp[i+1][j+1], dp[i][j] + mat[i+1][j+1]);
            }
            dp[i+1][j] = max(dp[i+1][j], dp[i][j] + mat[i+1][j]);
        }
    }
    /**
    for(ll i = 0; i<h; i++) {
        for(ll j =0 ; j<w; j++) {
            printf("%lld ",dp[i][j]);
        }
        puts("");
    }
    */

    ll ans = 0;
    for(ll j=0; j<w; j++) {
        ans = max(ans, dp[h-1][j]);
    }
    return ans;
}

int main() {
    ll T;
    scanf("%lld",&T);
    while(T--) {

        scanf("%lld%lld",&h,&w);

        for(ll i = 0; i<h; i++) {
            for(ll j =0 ; j<w; j++) {
                scanf("%lld",&mat[i][j]);
            }
        }
        printf("%lld\n",solve());

    }
    return 0;
}
/**
1
6 5
3 1 7 4 2
2 1 3 1 1
1 2 2 1 8
2 2 1 5 3
2 1 4 4 4
5 2 7 5 1
*/
