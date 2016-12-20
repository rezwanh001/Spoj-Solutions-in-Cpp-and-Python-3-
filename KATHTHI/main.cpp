#include <bits/stdc++.h>
using namespace std;
#define PII pair<int,int>
#define mp make_pair

int poss(int a, int b, int c,int d) {
    if((a>=0 && a < c) && (b>=0 && b<d)) {
        return 1;
    }
    return 0;
}

int main() {
    int t;
    scanf("%d",&t);
    while(t--) {
        int n,m;
        cin >> n >> m;

        vector<string> arr(n);
        for(int i=0;i<n;i++) cin >> arr[i];

        deque< PII > bfs;
        int visited[n][m];

        for(int i=0;i<n;i++) for(int j=0;j<m;j++) visited[i][j] = INT_MAX;

        visited[0][0] = 1;
        bfs.push_front(mp(0,0));

        int dx[] = {1,-1,0,0};
        int dy[] = {0,0,1,-1};

        while(!bfs.empty()) {
            PII node = bfs.front();
            bfs.pop_front();

            if(node.first == n-1 && node.second == m-1) break;

            for(int i=0;i<4;i++) {
                int x = node.first + dx[i];
                int y = node.second + dy[i];

                if(poss(x,y,n,m)) {
                    if(arr[x][y] == arr[node.first][node.second] && visited[x][y] > visited[node.first][node.second]) {
                        visited[x][y] = visited[node.first][node.second];
                        bfs.push_front(mp(x,y));
                    } else if(visited[x][y] > visited[node.first][node.second] + 1) {
                        visited[x][y] = visited[node.first][node.second] + 1;
                        bfs.push_back(mp(x,y));
                    }
                }
            }
        }
        cout << visited[n-1][m-1] - 1 << endl;
    }
    return 0;
}
