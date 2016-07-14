#include <cstdio>

const int MAX_DIGITS = 2048;
const int MAX_N = 5000;
int fibTable[MAX_N+1][MAX_DIGITS] = {};

int main() {
    int n;

    fibTable[1][0] = 1;
    for (int i=2; i<=MAX_N; i++) {
        int carry = 0;

        for (int j=0; j<MAX_DIGITS; j++) {
            int sum = fibTable[i-2][j] + fibTable[i-1][j] + carry;

            fibTable[i][j] = sum % 10;
            carry = sum / 10;
        }
    }
    while (scanf("%d", &n) != EOF) {
        bool startPrint = false;

        printf("The Fibonacci number for %d is ", n);
        if (!n) printf("0");
        else {
            for (int i=MAX_DIGITS-1; i>=0; i--) {
                if (fibTable[n][i]) startPrint = true;
                if (startPrint) printf("%d", fibTable[n][i]);
            }
        }
        printf("\n");
    }

    return 0;
}
