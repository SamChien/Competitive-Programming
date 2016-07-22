#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int eventNum;
    scanf("%d", &eventNum);
    int corSeq[eventNum+1];

    for (int i=1; i<=eventNum; i++) {
        int order;

        scanf("%d", &order);
        corSeq[order] = i;
    }
    while (true) {
        int seq[eventNum+1];
        int table[eventNum+1][eventNum+1];
        bool isOver = false;

        for (int i=0; i<=eventNum; i++) table[i][0] = table[0][i] = 0;
        for (int i=1; i<=eventNum; i++) {
            int order;

            if (scanf("%d", &order) == EOF) {
                isOver = true;
                break;
            } else seq[order] = i;
        }
        if (isOver) break;
        for (int i=1; i<=eventNum; i++) {
            for (int j=1; j<=eventNum; j++) {

                if (seq[i] == corSeq[j]) table[i][j] = table[i-1][j-1] + 1;
                else table[i][j] = max(table[i-1][j], table[i][j-1]);
            }
        }
        printf("%d\n", table[eventNum][eventNum]);
    }

    return 0;
}
