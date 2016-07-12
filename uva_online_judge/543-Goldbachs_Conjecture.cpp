#include <cstdio>

int main() {
    const int primeTableSize = 1000001;
    bool primeTable[primeTableSize];

    for (int i=0; i<primeTableSize; i++) primeTable[i] = true;
    primeTable[0] = primeTable[1] = false;
    for (int i=2; i*i<primeTableSize; i++) {
        if (primeTable[i]) {
            for (int j=2; i*j<primeTableSize; j++) primeTable[i*j] = false;
        }
    }
    while (true) {
        int n;

        scanf("%d", &n);
        if (n == 0) break;
        for (int i=2; i<=n/2; i++) {
            if (primeTable[i] && primeTable[n-i]) {
                printf("%d = %d + %d\n", n, i, n - i);
                break;
            }
        }
    }

    return 0;
}
