#include <cstdio>

int main() {
    int n;

    while (scanf("%d", &n) != EOF) {
        for (int i=1, j=1;; i++, j=j*10+1) {
            j = j % n;
            if (!j) {
                printf("%d\n", i);
                break;
            }
        }
    }

    return 0;
}
