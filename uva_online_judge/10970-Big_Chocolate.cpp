#include <cstdio>
#include <limits>
using namespace std;

int main() {
    int row, col;
    const int MAX_ROW = 300;
    const int MAX_COL = 300;
    int table[MAX_ROW][MAX_COL];
    const int INF = numeric_limits<int>::max();

    for (int i=0; i<MAX_ROW; i++) {
        for (int j=0; j<MAX_COL; j++) {
            if (i == 0 && j == 0) table[i][j] = 0;
            else if (i == 0) table[i][j] = j;
            else if (j == 0) table[i][j] = i;
            else table[i][j] = INF;
        }
    }
    for (int i=1; i<MAX_ROW; i++) {
        for (int j=1; j<MAX_COL; j++) {
            for (int k=0; k<=j/2; k++) {
                int restCol = j - k - 1;
                int cutNum;

                cutNum = table[i][k] + table[i][restCol] + 1;
                if (table[i][j] > cutNum) table[i][j] = cutNum;
            }
            for (int k=0; k<=i/2; k++) {
                int restRow = i - k - 1;
                int cutNum;

                cutNum = table[k][j] + table[restRow][j] + 1;
                if (table[i][j] > cutNum) table[i][j] = cutNum;
            }
        }
    }
    while (scanf("%d %d", &row, &col) != EOF) printf("%d\n", table[row-1][col-1]);

    return 0;
}
