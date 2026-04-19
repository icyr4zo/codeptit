#include <bits/stdc++.h>
using namespace std;

int n, m;
char a[1005][1005];
bool visited[1005][1005];

// len, xuong , trai , phai
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

void dfs(int x, int y) {
    visited[x][y] = true; // danh dau o da di qua
    
    // di sang cac o lan can
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        
        // ktra xem co nam trong ma tran va vat can chua di qua ko
        if (nx >= 0 && nx < n && ny >= 0 && ny < m && a[nx][ny] == '#' && !visited[nx][ny]) {
            dfs(nx, ny);
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            visited[i][j] = false;
        }
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == '#' && !visited[i][j]) {
                count++;
                dfs(i, j);
            }
        }
    }
    cout << count << endl;
    return 0;
}
