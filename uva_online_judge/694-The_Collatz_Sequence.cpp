#include <cstdio>

long long limit;

int findTerms(long long val) {
    if (val == 1) return 1;
    else if (val % 2 == 0) return 1 + findTerms(val / 2);
    else {
        long long result = 3 * val + 1;

        if (result > limit) return 1;
        else return 1 + findTerms(result);
    }
}

int main() {
    int caseCount = 1;

    while (true) {
        long long initVal;

        scanf("%lld%lld", &initVal, &limit);
        if (initVal == -1 && limit == -1) break;
        printf("Case %d: A = %lld, limit = %lld, number of terms = %d\n", caseCount++, initVal, limit, findTerms(initVal));
    }

    return 0;
}
