#include <cstdio>
#include <iostream>
using namespace std;

char** mat;
bool** oil;
int rowNum, colNum;

void dfs(int rowIndex, int colIndex) {
    if (rowIndex >= 0 &&
        rowIndex < rowNum &&
        colIndex >= 0 &&
        colIndex < colNum &&
        mat[rowIndex][colIndex] == '@' &&
        !oil[rowIndex][colIndex]) {

        oil[rowIndex][colIndex] = true;
        dfs(rowIndex - 1, colIndex - 1);
        dfs(rowIndex - 1, colIndex);
        dfs(rowIndex - 1, colIndex + 1);
        dfs(rowIndex, colIndex - 1);
        dfs(rowIndex, colIndex);
        dfs(rowIndex, colIndex + 1);
        dfs(rowIndex + 1, colIndex - 1);
        dfs(rowIndex + 1, colIndex);
        dfs(rowIndex + 1, colIndex + 1);
    }
}

int main() {
    while (true) {
        scanf("%d%d", &rowNum, &colNum);
        int depCount = 0;

        if (rowNum == 0 && colNum == 0) break;
        mat = new char*[rowNum];
        for (int i=0; i<rowNum; i++) mat[i] = new char[colNum];
        oil = new bool*[rowNum];
        for (int i=0; i<rowNum; i++) oil[i] = new bool[colNum];
        for (int i=0; i<rowNum; i++) {
            string temp;

            cin >> temp;
            for (int j=0; j<colNum; j++) mat[i][j] = temp[j];
        }
        for (int i=0; i<rowNum; i++) {
            for (int j=0; j<colNum; j++) oil[i][j] = false;
        }

        for (int i=0; i<rowNum; i++) {
            for (int j=0; j<colNum; j++) {
                if (mat[i][j] == '@' && !oil[i][j]) {
                    dfs(i, j);
                    depCount++;
                }
            }
        }
        printf("%d\n", depCount);

        for (int i=0; i<rowNum; i++) delete mat[i];
        delete mat;
        for (int i=0; i<rowNum; i++) delete oil[i];
        delete oil;
    }

    return 0;
}
