#include <cstdio>

int main() {
    int caseNum;

    scanf("%d", &caseNum);
    for (int caseCount=1; caseCount<=caseNum; caseCount++) {
        int wallNum, prevHeight;
        int highJump = 0;
        int lowJump = 0;

        scanf("%d", &wallNum);
        for (int i=0; i<wallNum; i++) {
            int height;

            scanf("%d", &height);
            if (i > 0) {
                if (height > prevHeight) highJump++;
                else if (height < prevHeight) lowJump++;
            }
            prevHeight = height;
        }
        printf("Case %d: %d %d\n", caseCount, highJump, lowJump);
    }

    return 0;
}
