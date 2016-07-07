#include <cstdio>

int main() {
    int caseNum;

    scanf("%d", &caseNum);
    while (caseNum--) {
        int sum, diff;
        bool haveFound = false;

        scanf("%d%d", &sum, &diff);
        for (int i=0, j=sum; i<=j; i++, j--) {
            if (j - i == diff) {
                haveFound = true;
                printf("%d %d\n", j, i);
                break;
            }
        }
        if (!haveFound) printf("impossible\n");
    }

    return 0;
}
