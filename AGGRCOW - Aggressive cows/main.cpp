#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll pos[123456];
ll N, C;

bool F(ll x){
  ll cowsplaced = 1, lastpos = pos[0];
  for(ll i = 1; i < N; i++){
    if(pos[i] - lastpos >= x){
      lastpos = pos[i];
      cowsplaced++;
      if(cowsplaced == C){
        return 1;
      }
    }
  }
  return 0;
}

ll binarySearch(){
  //sort(pos, pos + N);
  ll start = 0, ed = pos[N - 1], mx = -1;
  while(start < ed){
    int mid = start + (ed - start)/2;
    if(F(mid) == 1){
      if(mid > mx){
        mx = mid;
      }
      start = mid + 1;
    }
    else{
      ed = mid;
    }
  }
  return mx;
}

int main() {
  ll T;
  scanf("%lld",&T);
  while(T--){
    scanf("%lld%lld",&N,&C);
    for(ll i = 0;i<N;i++){
      scanf("%lld",&pos[i]);
    }
    //printf("%lld\n",binarySearch());
    sort(pos, pos + N);
    cout << binarySearch() << "\n";
  }

  return 0;
}
/**
1
5 3
1
2
8
4
9
*/
