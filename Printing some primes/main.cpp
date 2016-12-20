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

int status[(MX/32)+2];
void sieve() {
    int i, j, sqrtN,cnt=0;
    sqrtN = int( sqrt( MX ) );
    printf("2\n");
    cnt++;
    for( i = 3; i <= sqrtN; i += 2 )
        ///if( Check(status[i>>5],i&31)==0)
        if(!(status[i>>5] & (1<<(i&31)))) {
            if(!(cnt%100))  printf("%d\n",i);
            cnt++;
            for( j = i*i; j <= MX; j += (i<<1) )
                ///status[j>>5]= Set(status[j>>5],j & 31);
                status[j>>5]= status[j>>5] | (1<<(j&31));
        }

    for(i=sqrtN+1; i<=MX; i+=2)
        ///if( Check(status[i>>5],i&31)==0)
        if(!(status[i>>5] & (1<<(i&31)))) {
            if(!(cnt%100))  printf("%d\n",i);
            cnt++;
        }
    return;
}
int main() {
    sieve();
    return 0;
}
