#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll MAXN = 10005;
ll dist[ MAXN ];
bool visited[ MAXN ];
ll u ,v, node, mx, ri;
vector <ll> graph[MAXN + 5];

ll bfs(ll s){
    memset(visited, false, sizeof visited);
    memset(dist, -1, sizeof dist);
    queue< ll > q;
    q.push(s);
    visited[s] = true;
    dist[s] = 0;

    while(!q.empty()){
        ll u = q.front();
        q.pop();
        for(ll i=0;i<graph[u].size();i++){
            ll v = graph[u][i];
            while(!visited[v]){
                visited[v] = true;
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
    mx = 0;
    for(ll i = 1;i<node+ 1; i++){
        mx = max(mx, dist[i]);

        if (mx == dist[i]){
            ri = i;
        }
    }



}

int main()
{
    scanf("%lld",&node);
    for(ll i=0;i<node - 1;i++){
        ll u , v;
        scanf("%lld%lld",&u,&v);
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    bfs(1);

    bfs(ri);

    printf("%lld\n",mx);

    return 0;
}

/**
3
1 2
2 3
*/
