#include <cstdio>

int main() {
    const int CENTS_RANGE = 7490;
    const int TYPE_NUM = 5;
    int table[CENTS_RANGE][TYPE_NUM] = {};
    int typeArr[] = {1, 5, 10, 25, 50};
    int dollars;

    for (int i=0; i<TYPE_NUM; i++) table[0][i] = 1;
    for (int i=1; i<CENTS_RANGE; i++) {
        table[i][0] = 1;
        for (int j=1; j<TYPE_NUM; j++) {
            int nowType = typeArr[j];

            table[i][j] = table[i][j-1];
            if (i >= nowType) table[i][j] += table[i-nowType][j];
        }
    }
    while (scanf("%d", &dollars) != EOF) printf("%d\n", table[dollars][TYPE_NUM-1]);

    return 0;
}
