#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    while (true) {
        int table[3][3];
        string allPos[] = {"BCG", "BGC", "CBG", "CGB", "GBC", "GCB"};
        int moveNum[6];
        int minMoveIndex, minMoveNum;
        bool isOver = false;

        for (int i=0; i<3; i++) {
            for (int j=0; j<3; j++) {
                if (scanf("%d", &table[i][j]) == EOF) isOver = true;
            }
        }
        if (isOver) break;

        moveNum[0] = table[1][0] + table[2][0] + table[0][2] + table[2][2] + table[0][1] + table[1][1];
        moveNum[1] = table[1][0] + table[2][0] + table[0][1] + table[2][1] + table[0][2] + table[1][2];
        moveNum[2] = table[1][2] + table[2][2] + table[0][0] + table[2][0] + table[0][1] + table[1][1];
        moveNum[3] = table[1][2] + table[2][2] + table[0][1] + table[2][1] + table[0][0] + table[1][0];
        moveNum[4] = table[1][1] + table[2][1] + table[0][0] + table[2][0] + table[0][2] + table[1][2];
        moveNum[5] = table[1][1] + table[2][1] + table[0][2] + table[2][2] + table[0][0] + table[1][0];

        minMoveIndex = 0;
        minMoveNum = moveNum[0];
        for (int i=1; i<6; i++) {
            int nowMoveNum = moveNum[i];

            if (nowMoveNum < minMoveNum) {
                minMoveIndex = i;
                minMoveNum = nowMoveNum;
            }
        }
        cout << allPos[minMoveIndex] << " " << minMoveNum << endl;
    }

    return 0;
}
