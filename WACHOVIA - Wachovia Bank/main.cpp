#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    scanf("%d",&T);
    while(T--){
        int K, M;
        scanf("%d%d",&K,&M);
        int wt[M+1];
        int val[M+1];
        int dp[M+1][K+1];
        memset(dp,0,sizeof dp);
        memset(wt,0,sizeof wt);
        memset(val,0,sizeof val);
        for(int i=1;i<=M;i++){
            scanf("%d%d",&wt[i],&val[i]);
        }

        for(int i=1;i<=M;i++){
            for(int w=1;w<=K;w++){
                if(wt[i] > w){
                    dp[i][w] = dp[i-1][w];
                }
                else{
                    dp[i][w] = max(dp[i-1][w], val[i] + dp[i-1][ w - wt[i] ]);
                }
            }
        }
        printf("Hey stupid robber, you can get %d.\n",dp[M][K]);
    }
    return 0;
}
