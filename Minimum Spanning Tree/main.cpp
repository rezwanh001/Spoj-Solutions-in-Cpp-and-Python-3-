#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MAXN 100005
struct Edge{
    ll u,v,w;
    bool operator <(const Edge& p)const{
        return w < p.w;
    }
};

ll pr[MAXN];
vector <Edge> e;

ll Find(ll r){
    return (pr[r] == r) ? r:Find(pr[r]);
}

ll mst(ll n){
    sort(e.begin(),e.end());
    for(ll i=1;i<=n;i++){
        pr[i] = i;
    }
    ll cnt = 0,s = 0;

    for(ll i=0;i<(ll)e.size();i++){
        ll u = Find(e[i].u);
        ll v = Find(e[i].v);

        if( u!= v){
            pr[u] = v;
            cnt += 1;

            s += e[i].w;
            if(cnt == n-1){
                break;
            }
        }
    }
    return s;

}

int main() {

    ll n,m,w;
    //cin>> n>>m;
    scanf("%lld%lld",&n,&m);

    for(ll i=1;i<=m;i++){
        ll u,v,w;
        //cin>> u>>v >> w;
        scanf("%lld%lld%lld",&u,&v,&w);
        Edge get;
        get.u = u;
        get.v = v;
        get.w = w;
        e.push_back(get);
    }
    //cout<< mst(n) << endl;
    printf("%lld\n",mst(n));
    e.clear();

    return 0;
}
/**
Spoj:

4 5
1 2 10
2 3 15
1 3 5
4 2 2
4 3 40
Output :
17

*/
