#include <cstdio>

int main() {
    int caseNum;

    scanf("%d", &caseNum);
    while (caseNum != 0) {
        int a, b;

        scanf("%d%d", &a, &b);
        if (a < b) printf("<\n");
        else if (a == b) printf("=\n");
        else printf(">\n");
        caseNum--;
    }

    return 0;
}
