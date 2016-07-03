#include <cstdio>

int main() {
    for (int caseCount=1;; caseCount++) {
        int brickNum;
        int moveCount = 0;
        scanf("%d", &brickNum);
        int arr[brickNum];

        if (brickNum == 0) break;
        for (int i=0; i<brickNum; i++) scanf("%d", &arr[i]);
        while (true) {
            int maxIndex = 0;
            int minIndex = 0;

            for (int i=1; i<brickNum; i++) {
                int number = arr[i];
                int maxNum = arr[maxIndex];
                int minNum = arr[minIndex];

                if (number > maxNum) maxIndex = i;
                if (number < minNum) minIndex = i;
            }
            if (arr[maxIndex] == arr[minIndex]) {
                printf("Set #%d\n", caseCount);
                printf("The minimum number of moves is %d.\n\n", moveCount);
                break;
            } else {
                arr[maxIndex]--;
                arr[minIndex]++;
                moveCount++;
            }
        }
    }

    return 0;
}
