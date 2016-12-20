#include <bits/stdc++.h>
using namespace std;

bool ver[32000]= {false};
int primes[4000]= {0};

int sieve() {
    int i, j, k=0;

    for (i=2 ; i<=32000 ; i++) {
        if (ver[i]==false) {
            primes[k++]=i;

            for (j=2 ; j>0 && i*j<=32000 ; j++) {
                ver[i*j]=true;
            }
        }
    }
    primes[0]=2;
    return k;
}

int main() {
    sieve();

    int t,i,j,low,high;
    bool print;

    scanf("%d",&t);

    while (t--) {
        scanf("%d %d",&low,&high);

        if (high<low) {
            swap(high,low);
        }
        if (low == 1) {
            low++;
        }
        if (low == 0) {
            low+=2;
        }

        for (i=low ; i<=high ; i++) {
            for (j=0, print=true ; primes[j]*primes[j]<=i ; j++) {
                if (i%primes[j]==0) {
                    print = false;
                    break;
                }
            }
            if (print) printf("%d\n",i);
        }
        printf("\n");
    }
    return 0;
}
