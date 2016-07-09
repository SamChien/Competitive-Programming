#include <cstdio>

int main() {
    printf("PERFECTION OUTPUT\n");
    while (true) {
        int n;
        int sum = 0;

        scanf("%d", &n);
        if (n == 0) break;
        for (int i=1; i<=n/2; i++) {
            if (n % i == 0) sum += i;
        }
        printf("%5d  ", n);
        if (sum < n) printf("DEFICIENT\n");
        else if (sum == n) printf("PERFECT\n");
        else printf("ABUNDANT\n");
    }
    printf("END OF OUTPUT\n");

    return 0;
}
