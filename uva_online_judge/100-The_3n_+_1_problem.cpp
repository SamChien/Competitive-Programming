#include <cstdio>
#include <iostream>
using namespace std;

int findLen(int num) {
    if (num == 1) return 1;
    else if (num % 2 == 0) return 1 + findLen(num / 2);
    else return 1 + findLen(3 * num + 1);
}

int main() {
    int a, b;

    while (scanf("%d%d", &a, &b) != EOF) {
        int maxLen = -1;
        bool haveSwap = false;

        if (a > b) {
            swap(a, b);
            haveSwap = true;
        }
        for (int i=a; i<=b; i++) {
            int len = findLen(i);

            if (len > maxLen) maxLen = len;
        }
        if (haveSwap) swap(a, b);
        printf("%d %d %d\n", a, b, maxLen);
    }

    return 0;
}
