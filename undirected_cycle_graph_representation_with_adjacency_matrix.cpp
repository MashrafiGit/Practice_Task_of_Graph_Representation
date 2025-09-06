#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    int adja_mat[n][n];

    memset(adja_mat, 0, sizeof(adja_mat));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (i == j)
                adja_mat[i][j] = 1;

    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;

        adja_mat[a][b] = 1;
        adja_mat[b][a] = 1;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << adja_mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}