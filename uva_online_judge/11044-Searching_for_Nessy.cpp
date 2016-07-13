#include <cstdio>
#include <cmath>

int main() {
    int caseNum;

    scanf("%d", &caseNum);
    while (caseNum--) {
        int rowNum, colNum;

        scanf("%d%d", &rowNum, &colNum);
        printf("%d\n", (int)(ceil((rowNum - 2) / 3.0) * ceil((colNum - 2) / 3.0)));
    }

    return 0;
}
