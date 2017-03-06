/* *****************************************************************
   *                   BISMILLAHIR RAHMANIR RAHIM                  *
   *                                                               *
   *   Md. Rezwanul Haque                                          *
   *   CSE-2K14 (KUET)                                             *
   *   Gmail : r.haque.249.rh@gmail.com                            *
   *   Khulna University of Engineering & Technology, Bangladesh.  *
   *****************************************************************


  */

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MX 100000005

#define SIZE 100005
#define digit(c) ((c) - '0')
#define PI 3.141592654
#define MAX_INT 2147483646
#define DIFF 10E-7
#define MOD 1000000007

ll f[SIZE];
ll tree[SIZE];
ll MaxIdx;

ll read(ll idx){
    ll sum = 0;
    while(idx> 0 ){
        sum+= tree[idx];
        idx -= (idx & -idx);
    }
    return sum;
}

ll update(ll idx,ll val){
    while(idx<=MaxIdx){
        tree[idx] += val;
        idx += (idx & -idx);
    }
}

ll query(ll i,ll j){
    return read(j) - read(i-1);
}

ll Get(vector<ll> *tree, ll i){
    ll sum = 0;
    while(i>0){
        sum += tree->at(i);
        i -= i & -i;
    }
    return sum;
}

void Add(vector<ll> *tree, ll idx,ll val){
    while(idx<tree->size()){
        tree->at(idx) += val;
        idx += (idx & -idx);
    }
}

int main() {

    ll tc;
    scanf("%lld",&tc);

    while(tc--){
        ll n;
        scanf("%lld",&n);

        vector<ll> inv;
        ll total = 0 ;
        ll size = 0;

        for(ll i=n,num;i--;scanf("%lld",&num),size = max(size,num),inv.push_back(num));

        vector<ll> tree(size + 1,0);

        for(ll i =inv.size()-1;size>0 && i>=0;--i){
            total += Get(&tree,inv[i] - 1);
            Add(&tree,inv[i],1);
        }
        printf("%lld\n",total);
    }


    return 0;
}
