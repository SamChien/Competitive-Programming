#include <cstdio>
#include <cstdlib>

int main() {
    int n;

    while (scanf("%d", &n) != EOF) {
        bool table[n];
        bool isJolly = true;
        int prevNum, nowNum;

        for (int i=0; i<n; i++) table[i] = false;
        scanf("%d", &prevNum);
        for (int i=1; i<n; i++) {
            int diff;

            scanf("%d", &nowNum);
            diff = abs(nowNum - prevNum);
            if (diff < n) table[diff] = true;
            prevNum = nowNum;
        }
        for (int i=1; i<n; i++) {
            if (!table[i]) {
                isJolly = false;
                break;
            }
        }
        if (isJolly) printf("Jolly\n");
        else printf("Not jolly\n");
    }

    return 0;
}
