#include <bits/stdc++.h>
using namespace std;

#define MAX_N 10000
#define MAX_W 10000
int n;
int dp[MAX_N+1][MAX_W+1];
int weight[MAX_N+1];
int cost[MAX_N+1];
int CAP;

int func(int i,int w) {
    if(i==n+1) return 0;
    if(dp[i][w]!=-1) return dp[i][w];
    int profit1=0,profit2=0;
    if(w+weight[i]<=CAP)
        profit1=cost[i]+func(i+1,w+weight[i]);

    profit2=func(i+1,w);
    dp[i][w]=max(profit1,profit2);
    return dp[i][w];
}
int main() {

    //freopen("in","r",stdin);
    memset(dp,-1,sizeof(dp));
    scanf("%d%d",&CAP,&n);
    for(int i=1; i<=n; i++) {
        scanf("%d%d",&weight[i],&cost[i]);
    }
    printf("%d\n",func(1,0));


}
