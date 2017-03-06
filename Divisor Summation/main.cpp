/* *****************************************************************
   *                   BISMILLAHIR RAHMANIR RAHIM                  *
   *                                                               *
   *   Md. Rezwanul Haque                                          *
   *   CSE-2K14 (KUET)                                             *
   *   Gmail : r.haque.249.rh@gmail.com                            *
   *   Khulna University of Engineering & Technology, Bangladesh.  *
   *****************************************************************


  */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define S 1000005
#define pb push_back
ll a[S];

int main() {
    ll T,i,r=0,sum=0;
    ll x;
    vector <ll> v;
    scanf("%lld",&T);
    while(T--) {
        sum = 0;
        scanf("%lld",&x);
        for( i=1; i*i<x; i++) {

            if(x%i == 0) {
                sum+=i + x/i;
            }
        }
        if(i*i == x) {
            sum+=i;
        }
        sum -= x;
        printf("%lld\n",sum);

    }
    return 0;
}
