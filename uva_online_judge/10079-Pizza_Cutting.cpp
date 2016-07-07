#include <cstdio>

int main() {
    while (true) {
        long long n;

        scanf("%lld", &n);
        if (n < 0) break;
        printf("%lld\n", (n * n + n + 2) / 2);
    }

    return 0;
}
