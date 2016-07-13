#include <cstdio>

int main() {
    const int TABLE_SIZE = 101;
    bool priTable[TABLE_SIZE];

    for (int i=0; i<TABLE_SIZE; i++) priTable[i] = true;
    for (int i=2; i<TABLE_SIZE; i++) {
        if (priTable[i]) {
            for (int j=2; i*j<TABLE_SIZE; j++) priTable[i*j] = false;
        }
    }

    while (true) {
        int n;
        int countTable[TABLE_SIZE] = {};
        int numEachLine = 0;

        scanf("%d", &n);
        if (!n) break;
        for (int i=2; i<=n; i++) {
            int nowVal = i;

            for (int j=2; j<=i; j++) {
                if (priTable[j] && !(nowVal % j)) {
                    nowVal /= j;
                    countTable[j]++;
                    j--;
                    if (nowVal == 1) break;
                }
            }
        }
        printf("%3d! =", n);
        for (int i=2; i<=n; i++) {
            int finalCount = countTable[i];

            if (finalCount) {
                if (numEachLine == 15) {
                    printf("\n      ");
                    numEachLine = 0;
                }
                printf("%3d", finalCount);
                numEachLine++;
            }
        }
        printf("\n");
    }

    return 0;
}
