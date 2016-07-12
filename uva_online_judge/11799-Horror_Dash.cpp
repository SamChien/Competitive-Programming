#include <cstdio>

int main() {
    int caseNum;

    scanf("%d", &caseNum);
    for (int caseCount=1; caseCount<=caseNum; caseCount++) {
        int stuNum;
        scanf("%d", &stuNum);
        int stuArr[stuNum];
        int max;

        for (int i=0; i<stuNum; i++) scanf("%d", &stuArr[i]);
        max = stuArr[0];
        for (int i=1; i<stuNum; i++) {
            if (max < stuArr[i]) max = stuArr[i];
        }
        printf("Case %d: %d\n", caseCount, max);
    }

    return 0;
}
