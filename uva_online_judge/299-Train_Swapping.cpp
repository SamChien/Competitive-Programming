#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int caseNum;

    scanf("%d", &caseNum);
    while (caseNum != 0) {
        int trainNum;
        int swapCount = 0;
        scanf("%d", &trainNum);
        int cars[trainNum];

        for (int i=0; i<trainNum; i++) scanf("%d", &cars[i]);
        for (int i=trainNum-1; i>=1; i--) {
            for (int j=1; j<=i; j++) {
                if (cars[j-1] > cars[j]) {
                    swap(cars[j-1], cars[j]);
                    swapCount++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n", swapCount);
        caseNum--;
    }

    return 0;
}
