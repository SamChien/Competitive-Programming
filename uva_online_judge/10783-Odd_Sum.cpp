#include <cstdio>

int main() {
    int caseNum;

    scanf("%d", &caseNum);
    for (int nowCase=1; nowCase<=caseNum; nowCase++) {
        int a, b;
        int sum = 0;

        scanf("%d%d", &a, &b);
        for (int i=a; i<=b; i++) {
            if (i % 2 != 0) sum += i;
        }
        printf("Case %d: %d\n", nowCase, sum);
    }

    return 0;
}
