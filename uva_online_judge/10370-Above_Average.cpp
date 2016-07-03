#include <cstdio>

int main() {
    int caseNum;

    scanf("%d", &caseNum);
    while (caseNum--) {
        int peoNum;
        scanf("%d", &peoNum);
        int peoArr[peoNum];
        double ave = 0;
        double abAve = 0;

        for (int i=0; i<peoNum; i++) {
            scanf("%d", &peoArr[i]);
            ave += peoArr[i];
        }
        ave /= peoNum;
        for (int i=0; i<peoNum; i++) {
            int score = peoArr[i];

            if (score > ave) abAve++;
        }
        abAve = abAve / peoNum * 100;
        printf("%.3lf%%\n", abAve);
    }

    return 0;
}
