#include <bits/stdc++.h>

using namespace std;

int main()

{
    int n, e;
    cin >> n >> e;
    int grap[n][n];
    memset(grap, 0, sizeof(grap));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (i == j)
                grap[i][j] = 1;
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        grap[a][b] = 1;
        grap[b][a] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << grap[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}



