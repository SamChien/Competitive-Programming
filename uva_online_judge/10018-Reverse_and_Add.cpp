#include <cstdio>

int main() {
    int caseNum;

    scanf("%d", &caseNum);
    while (caseNum--) {
        long long num;
        int iterCount = 0;

        scanf("%lld", &num);
        while (true) {
            long long revNum = 0;

            for (long long i=1; i<=num; i*=10) {
                int digit = num / i % 10;

                revNum = revNum * 10 + digit;
            }
            if (num == revNum) break;
            num += revNum;
            iterCount++;
        }
        printf("%d %lld\n", iterCount, num);
    }

    return 0;
}
