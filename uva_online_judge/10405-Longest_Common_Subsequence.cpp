#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    string a, b;

    while (getline(cin, a)) {
        getline(cin, b);
        int rowNum = a.size() + 1;
        int colNum = b.size() + 1;
        int lcsTable[rowNum][colNum];

        for (int i=0; i<rowNum; i++) lcsTable[i][0] = 0;
        for (int i=0; i<colNum; i++) lcsTable[0][i] = 0;
        for (int i=1; i<rowNum; i++) {
            for (int j=1; j<colNum; j++) {
                if (a[i-1] == b[j-1]) lcsTable[i][j] = lcsTable[i-1][j-1] + 1;
                else lcsTable[i][j] = max(lcsTable[i-1][j], lcsTable[i][j-1]);
            }
        }
        printf("%d\n", lcsTable[rowNum-1][colNum-1]);
    }

    return 0;
}
