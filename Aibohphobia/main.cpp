#include <bits/stdc++.h>
using namespace std;

int LCS(string X, string Y, int m, int n){
    int dp[m+1][n+1];

    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(i == 0 || j == 0){
                dp[i][j] = 0;
            }
            else if(X[i - 1] == Y[j - 1]){
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    //cout << dp[m][n] << endl;
    return dp[m][n];
}

int main()
{
    //LCS("fft", "tff" , 3, 3);

    int T;
    scanf("%d",&T);

    while(T--){
        string s1, s2;
        cin >> s2;
        s1 = s2;

        reverse(s2.begin(), s2.end());
        int rez = LCS(s1,s2, s1.size(), s2.size());

        cout<< abs(s1.size() -  rez)  << endl;
    }

    return 0;
}
