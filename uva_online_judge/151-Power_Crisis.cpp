#include <cstdio>

int main() {
    int n;

    while (true) {
        scanf("%d", &n);
        if (!n) break;

        for (int m=1; m<n; m++) {
            int nowPos = 0;
            int countM = 0;
            int totalNum = n;
            bool arr[n];

            for (int i=0; i<n; i++) arr[i] = true;
            arr[0] = false;
            totalNum--;
            while (totalNum != 1) {
                nowPos = (nowPos + 1) % n;
                if (arr[nowPos]) {
                    countM++;
                    if (countM == m) {
                        arr[nowPos] = false;
                        totalNum--;
                        countM = 0;
                    }
                }
            }
            if (arr[12]) {
                printf("%d\n", m);
                break;
            }
        }
    }

    return 0;
}
