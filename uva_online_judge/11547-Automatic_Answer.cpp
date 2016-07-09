#include <cstdio>
#include <cstdlib>

int main() {
    int caseNum;

    scanf("%d", &caseNum);
    while (caseNum--) {
        int num;

        scanf("%d", &num);
        num = (num * 567 / 9 + 7492) * 235 / 47 - 498;
        printf("%d\n", abs(num) / 10 % 10);
    }

    return 0;
}
