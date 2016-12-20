/* *****************************************************************
   *                   BISMILLAHIR RAHMANIR RAHIM                  *
   *                                                               *
   *   Md. Rezwanul Haque                                          *
   *   CSE-2K14 (KUET)                                             *
   *   Khulna University of Engineering & Technology, Bangladesh.  *
   *   Gmail : r.haque.249.rh@gmail.com                            *
   *****************************************************************
   */



#include <bits/stdc++.h>


using namespace std;

#define SIZE(X) ((int)(X.size()))///NOTES:SIZE(
#define LENGTH(X) ((int)(X.length()))///NOTES:LENGTH(
#define MP(X,Y) make_pair(X,Y)///NOTES:MP(
typedef long long int64;///NOTES:int64
typedef long long int ll;
typedef unsigned long long uint64;///NOTES:uint64
#define two(X) (1<<(X))///NOTES:two(
#define twoL(X) (((int64)(1))<<(X))///NOTES:twoL(
#define contain(S,X) (((S)&two(X))!=0)///NOTES:contain(
#define containL(S,X) (((S)&twoL(X))!=0)///NOTES:containL(
#define MAX 100005
const double pi=acos(-1.0);///NOTES:pi
const double eps=1e-11;///NOTES:eps


ll biTree[MAX];

void update(ll idx, ll value, ll n){
    while(idx <= n){
        biTree[idx] = min(biTree[idx],value);
        idx += (idx & -idx);
    }
}

ll readTree(ll idx){
    ll prevMin = INT_MAX;
    while(idx){
        prevMin = min(biTree[idx], prevMin);
        idx -= (idx & -idx);
    }
    return prevMin;
}

struct contestRank{
    ll c1, c2, c3;
};

bool cmp(const contestRank &a,const contestRank &b){
    return a.c1 < b.c1;
}

/***** Main Function Start Here *****/

int main() {

    ll T;
    scanf("%lld",&T);

    while(T--){
        ll n;
        scanf("%lld",&n);
        contestRank ranks[n];
        for(ll idx = 0; idx<n; idx++){
            scanf("%lld%lld%lld",&ranks[idx].c1, &ranks[idx].c2, &ranks[idx].c3);

        }
        sort(ranks,ranks+n,cmp);

        fill(biTree,biTree + n + 2,INT_MAX);

        ll excellent = 0;
        for(ll idx = 0;idx<n;idx++){
            ll cur = readTree(ranks[idx].c2);

            if(cur > ranks[idx].c3){
                excellent++;
            }
            update(ranks[idx].c2, ranks[idx].c3, n);
        }

        printf("%lld\n",excellent);
    }

    return 0;
}
