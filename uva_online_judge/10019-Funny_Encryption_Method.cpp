#include <cstdio>
#include <cmath>

int decToBin(int dec) {
    int oneCount = 0;

    while (dec) {
        if (dec % 2) oneCount++;
        dec /= 2;
    }
    return oneCount;
}

int main() {
    int caseNum;

    scanf("%d", &caseNum);
    while (caseNum--) {
        int m, b1, b2;
        int newM = 0;

        scanf("%d", &m);
        b1 = decToBin(m);
        for (int i=1, j=0; i<=m; i*=10, j++) {
            int digit = m / i % 10;

            newM += digit * pow(16, j);
        }
        b2 = decToBin(newM);
        printf("%d %d\n", b1, b2);
    }

    return 0;
}
