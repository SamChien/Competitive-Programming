#include <cstdio>

int main() {
    int matSize;

    while (true) {
        scanf("%d", &matSize);
        if (matSize == 0) break;
        int mat[matSize][matSize];
        int rowTable[matSize];
        int colTable[matSize];
        bool isOK = true;
        int rowOddIndex = -1;
        int colOddIndex = -1;
        bool isCorrupt = false;

        for (int i=0; i<matSize; i++) {
            for (int j=0; j<matSize; j++) scanf("%d", &mat[i][j]);
            rowTable[i] = colTable[i] = 0;
        }
        for (int i=0; i<matSize; i++) {
            for (int j=0; j<matSize; j++) {
                int val = mat[i][j];

                rowTable[i] += val;
                colTable[j] += val;
            }
        }
        for (int i=0; i<matSize; i++) {
            int rowVal = rowTable[i];
            int colVal = colTable[i];

            if (rowVal % 2 || colVal % 2) {
                isOK = false;
                if (rowOddIndex != -1 && colOddIndex != -1) {
                    isCorrupt = true;
                    break;
                }
                if (rowVal % 2) rowOddIndex = i;
                if (colVal % 2) colOddIndex = i;
            }
        }
        if (!isOK && (rowOddIndex == -1 || colOddIndex == -1)) isCorrupt = true;
        if (isOK) printf("OK\n");
        else if (isCorrupt) printf("Corrupt\n");
        else printf("Change bit (%d,%d)\n", rowOddIndex + 1, colOddIndex + 1);
    }

    return 0;
}
