#include <cstdio>

int f(int n) {
    if (n < 10) return n;
    else {
        int digitSum = 0;

        for (long long i=1; i<=n; i*=10) {
            int digit = n / i % 10;

            digitSum += digit;
        }
        return f(digitSum);
    }
}

int main() {
    while (true) {
        int n;

        scanf("%d", &n);
        if (n == 0) break;
        printf("%d\n", f(n));
    }

    return 0;
}
