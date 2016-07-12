#include <cstdio>

int main() {
    const int maxN = 100;
    const int maxM = 100;
    long long table[maxN+1][maxM+1];

    for (int i=0; i<=maxN; i++) {
        for (int j=0; j<=maxM; j++) {
            if (j == 0 || j == i) table[i][j] = 1;
            else table[i][j] = table[i-1][j-1] + table[i-1][j];
        }
    }
    while (true) {
        int n, m;
        scanf("%d%d", &n, &m);
        if (n == 0 && m == 0) break;
        printf("%d things taken %d at a time is %lld exactly.\n", n, m, table[n][m]);
    }

    return 0;
}
