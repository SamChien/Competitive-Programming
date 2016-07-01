#include <cstdio>

int main() {
    for (int nowCase=1;; nowCase++) {
        int rowNum, colNum;
        scanf("%d%d", &rowNum, &colNum);
        if (rowNum == 0 && colNum == 0) break;
        int table[rowNum][colNum];

        for (int row=0; row<rowNum; row++) {
            for (int col=0; col<colNum; col++) table[row][col] = 0;
        }
        for (int row=0; row<rowNum; row++) {
            for (int col=0; col<colNum; col++) {
                char ch;

                scanf("%c", &ch);
                if (ch == '\n') {
                    col--;
                    continue;
                }
                if (ch == '*') table[row][col] = -1;
            }
        }

        for (int row=0; row<rowNum; row++) {
            for (int col=0; col<colNum; col++) {
                int num = table[row][col];

                if (num == -1) {
                    if (row - 1 >= 0 && table[row - 1][col] != -1) table[row - 1][col]++;
                    if (row + 1 < rowNum && table[row + 1][col] != -1) table[row + 1][col]++;
                    if (col - 1 >= 0 && table[row][col - 1] != -1) table[row][col - 1]++;
                    if (col + 1 < colNum && table[row][col + 1] != -1) table[row][col + 1]++;
                    if (row - 1 >= 0 && col - 1 >= 0 && table[row - 1][col - 1] != -1) table[row - 1][col - 1]++;
                    if (row - 1 >= 0 && col + 1 < colNum && table[row - 1][col + 1] != -1) table[row - 1][col + 1]++;
                    if (row + 1 < rowNum && col - 1 >= 0 && table[row + 1][col - 1] != -1) table[row + 1][col - 1]++;
                    if (row + 1 < rowNum && col + 1 < colNum && table[row + 1][col + 1] != -1) table[row + 1][col + 1]++;
                }
            }
        }

        if (nowCase > 1) printf("\n");
        printf("Field #%d:\n", nowCase);
        for (int row=0; row<rowNum; row++) {
            for (int col=0; col<colNum; col++) {
                int num = table[row][col];

                if (num == -1) printf("*");
                else printf("%d", num);
            }
            printf("\n");
        }
    }

    return 0;
}
