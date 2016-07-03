#include <cstdio>

int main() {
    int caseNum;
    bool isFirst = true;

    scanf("%d", &caseNum);
    for (int caseCount=1; caseCount<=caseNum; caseCount++) {
        int amp, freq;

        scanf("%d%d", &amp, &freq);
        for (int fCount=1; fCount<=freq; fCount++) {
            if (isFirst) isFirst = false;
            else printf("\n");
            for (int aCount=1; aCount<=amp; aCount++) {
                for (int num = 1; num <= aCount; num++) printf("%d", aCount);
                printf("\n");
            }
            for (int aCount=amp-1; aCount>=1; aCount--) {
                for (int num=1; num<=aCount; num++) printf("%d", aCount);
                printf("\n");
            }
        }
    }

    return 0;
}
